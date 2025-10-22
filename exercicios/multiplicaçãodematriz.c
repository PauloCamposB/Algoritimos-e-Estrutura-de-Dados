#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TITULO 100
#define MAX_AUTOR 50

// Estrutura para armazenar informa��es sobre um livro
typedef struct {
    char titulo[MAX_TITULO];
    char autor[MAX_AUTOR];
    int ano;
    int disponibilidade;
} Livro;

// Fun��o para buscar um livro pelo t�tulo
void buscarLivro(Livro *biblioteca, int quantidade, char *titulo) {
    for (int i = 0; i < quantidade; i++) {
        if (strcmp(biblioteca[i].titulo, titulo) == 0) {
            printf("\nLivro encontrado:\n");
            printf("T�tulo: %s\n", biblioteca[i].titulo);
            printf("Autor: %s\n", biblioteca[i].autor);
            printf("Ano: %d\n", biblioteca[i].ano);
            printf("C�pias dispon�veis: %d\n", biblioteca[i].disponibilidade);
            return;
        }
    }
    printf("\nLivro n�o encontrado.\n");
}

int main() {
    int quantidade;

    printf("Digite o n�mero de livros: ");
    scanf("%d", &quantidade);
    getchar(); // Limpa o buffer do newline

    // Aloca��o din�mica para o array de livros
    Livro *biblioteca = (Livro *)malloc(quantidade * sizeof(Livro));
    if (biblioteca == NULL) {
        printf("Erro ao alocar mem�ria.\n");
        return 1;
    }

    // Cadastro dos livros
    for (int i = 0; i < quantidade; i++) {
        printf("\nLivro %d\n", i + 1);

        printf("T�tulo: ");
        fgets(biblioteca[i].titulo, MAX_TITULO, stdin);
        biblioteca[i].titulo[strcspn(biblioteca[i].titulo, "\n")] = '\0'; // Remove o newline

        printf("Autor: ");
        fgets(biblioteca[i].autor, MAX_AUTOR, stdin);
        biblioteca[i].autor[strcspn(biblioteca[i].autor, "\n")] = '\0';

        printf("Ano: ");
        scanf("%d", &biblioteca[i].ano);

        printf("C�pias dispon�veis: ");
        scanf("%d", &biblioteca[i].disponibilidade);
        getchar(); // Limpa o buffer do newline
    }

    // Exibi��o dos livros cadastrados
    printf("\n--- Lista de Livros ---\n");
    for (int i = 0; i < quantidade; i++) {
        printf("T�tulo: %s, Autor: %s, Ano: %d, C�pias: %d\n",
               biblioteca[i].titulo, biblioteca[i].autor,
               biblioteca[i].ano, biblioteca[i].disponibilidade);
    }

    // Pesquisa por t�tulo
    char tituloBusca[MAX_TITULO];
    printf("\nDigite o t�tulo do livro para pesquisar: ");
    fgets(tituloBusca, MAX_TITULO, stdin);
    tituloBusca[strcspn(tituloBusca, "\n")] = '\0'; // Remove o newline

    buscarLivro(biblioteca, quantidade, tituloBusca);

    // Libera a mem�ria alocada
    free(biblioteca);

    return 0;
}
