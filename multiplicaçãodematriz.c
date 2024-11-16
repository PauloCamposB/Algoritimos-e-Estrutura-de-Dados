#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TITULO 100
#define MAX_AUTOR 50

// Estrutura para armazenar informações sobre um livro
typedef struct {
    char titulo[MAX_TITULO];
    char autor[MAX_AUTOR];
    int ano;
    int disponibilidade;
} Livro;

// Função para buscar um livro pelo título
void buscarLivro(Livro *biblioteca, int quantidade, char *titulo) {
    for (int i = 0; i < quantidade; i++) {
        if (strcmp(biblioteca[i].titulo, titulo) == 0) {
            printf("\nLivro encontrado:\n");
            printf("Título: %s\n", biblioteca[i].titulo);
            printf("Autor: %s\n", biblioteca[i].autor);
            printf("Ano: %d\n", biblioteca[i].ano);
            printf("Cópias disponíveis: %d\n", biblioteca[i].disponibilidade);
            return;
        }
    }
    printf("\nLivro não encontrado.\n");
}

int main() {
    int quantidade;

    printf("Digite o número de livros: ");
    scanf("%d", &quantidade);
    getchar(); // Limpa o buffer do newline

    // Alocação dinâmica para o array de livros
    Livro *biblioteca = (Livro *)malloc(quantidade * sizeof(Livro));
    if (biblioteca == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    // Cadastro dos livros
    for (int i = 0; i < quantidade; i++) {
        printf("\nLivro %d\n", i + 1);

        printf("Título: ");
        fgets(biblioteca[i].titulo, MAX_TITULO, stdin);
        biblioteca[i].titulo[strcspn(biblioteca[i].titulo, "\n")] = '\0'; // Remove o newline

        printf("Autor: ");
        fgets(biblioteca[i].autor, MAX_AUTOR, stdin);
        biblioteca[i].autor[strcspn(biblioteca[i].autor, "\n")] = '\0';

        printf("Ano: ");
        scanf("%d", &biblioteca[i].ano);

        printf("Cópias disponíveis: ");
        scanf("%d", &biblioteca[i].disponibilidade);
        getchar(); // Limpa o buffer do newline
    }

    // Exibição dos livros cadastrados
    printf("\n--- Lista de Livros ---\n");
    for (int i = 0; i < quantidade; i++) {
        printf("Título: %s, Autor: %s, Ano: %d, Cópias: %d\n",
               biblioteca[i].titulo, biblioteca[i].autor,
               biblioteca[i].ano, biblioteca[i].disponibilidade);
    }

    // Pesquisa por título
    char tituloBusca[MAX_TITULO];
    printf("\nDigite o título do livro para pesquisar: ");
    fgets(tituloBusca, MAX_TITULO, stdin);
    tituloBusca[strcspn(tituloBusca, "\n")] = '\0'; // Remove o newline

    buscarLivro(biblioteca, quantidade, tituloBusca);

    // Libera a memória alocada
    free(biblioteca);

    return 0;
}
