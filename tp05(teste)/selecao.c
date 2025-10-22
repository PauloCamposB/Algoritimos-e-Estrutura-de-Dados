#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_GAMES 6000
#define MAX_STR 1024

typedef struct Game{
    int id;
    char name[MAX_STR];
    char releaseDate[50];
    char owners[50];
    double price;
    char languages[MAX_STR];
    int metacritic;
    double userScore;
} Game;

int comparacoes = 0;
int movimentacoes = 0;

void trim_newline(char *s) {
    size_t i = strlen(s);
    while (i > 0 && (s[i-1] == '\n' || s[i-1] == '\r')) {
        s[i-1] = '\0';
        i--;
    }
}

void trocar(Game *a, Game *b) {
    Game tmp = *a;
    *a = *b;
    *b = tmp;
    movimentacoes++;
}

int buscarPorId(Game *todos, int total, int id) {
    for (int i = 0; i < total; i++) {
        if (todos[i].id == id) return i;
    }
    return -1;
}

void selectionSort(Game *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        int menor = i;
        for (int j = i + 1; j < n; j++) {
            comparacoes++;
            if (strcmp(arr[j].name, arr[menor].name) < 0) {
                menor = j;
            }
        }
        if (menor != i) {
            trocar(&arr[i], &arr[menor]);
        }
    }
}


int parse_game(const char *line, Game *game) {
    const char *p = line;
    char tmp[MAX_STR];
    int idx = 0;
    int campo_atual = 0;

    
    while (*p != '\0') {
        idx = 0;
        
       
        while (*p == ' ') p++;
        
        
        if (*p == '"') {
            p++; 
            while (*p != '\0') {
                if (*p == '"' && (*(p+1) == ',' || *(p+1) == '\0' || *(p+1) == '\n' || *(p+1) == '\r')) {
                    p++; 
                    break;
                }
                if (idx < MAX_STR-1) tmp[idx++] = *p;
                p++;
            }
        } else {
            
            while (*p != '\0' && *p != ',' && *p != '\n' && *p != '\r') {
                if (idx < MAX_STR-1) tmp[idx++] = *p;
                p++;
            }
        }
        
        tmp[idx] = '\0';
        trim_newline(tmp);
        
        
        switch (campo_atual) {
            case 0: game->id = atoi(tmp); break;
            case 1: strncpy(game->name, tmp, MAX_STR-1); break;
            case 2: strncpy(game->releaseDate, tmp, 49); break;
            case 3: strncpy(game->owners, tmp, 49); break;
            case 4: game->price = atof(tmp); break;
            case 5: strncpy(game->languages, tmp, MAX_STR-1); break;
            case 6: game->metacritic = atoi(tmp); break;
            case 7: game->userScore = atof(tmp); break;
        }
        
        campo_atual++;
        if (*p == ',') p++;
        if (campo_atual >= 8) break; 
    }
    
    return (campo_atual > 0); 
}


void imprimirGame(Game *g) {
    printf("%d ## %s ## %s ## %s ## %.2f ## %s ## %d ## %.1f\n", 
           g->id, g->name, g->releaseDate, g->owners, g->price, 
           g->languages, g->metacritic, g->userScore);
}

int main(){
    Game *todos_jogos = malloc(MAX_GAMES * sizeof(Game)); 
    Game *selecionados = malloc(MAX_GAMES * sizeof(Game));
    int total = 0; 
    int totalSel = 0;
    char linha[4090];

    FILE *fp = fopen("games.csv", "r");
    if (!fp){
        printf("Erro ao abrir games.csv\n");
        return 1;
    }

    
    if (fgets(linha, sizeof(linha), fp) == NULL) {
        fclose(fp);
        printf("Arquivo vazio\n");
        return 1;
    }
    
    
    while (fgets(linha, sizeof(linha), fp)) {
        if (parse_game(linha, &todos_jogos[total])) {
            total++;
            if (total >= MAX_GAMES) break;
        }
    }
    fclose(fp);

    

    
    char entrada[256];
    while (scanf("%s", entrada) == 1) {
        if (strcmp(entrada, "FIM") == 0) break;
        
        int id = atoi(entrada);
        int pos = buscarPorId(todos_jogos, total, id);
        if (pos != -1) {
            selecionados[totalSel++] = todos_jogos[pos];
            
            printf("=> ");
            imprimirGame(&todos_jogos[pos]);
        } else {
            printf("ID %d não encontrado!\n", id);
        }
    }

  
    comparacoes = 0;
    movimentacoes = 0;
    selectionSort(selecionados, totalSel);

    for (int i = 0; i < totalSel; i++) {
        imprimirGame(&selecionados[i]);
    }

    free(todos_jogos);
    free(selecionados);
    return 0;
}