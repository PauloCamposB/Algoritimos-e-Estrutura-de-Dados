#include <stdio.h>
#include <stdlib.h>

typedef struct provas {
    char nome_do_aluno[50];
    int matricula;
    char respostas[30];
} provas;


void preencher(provas *alunos, int n);
void mostrar_provas(provas *alunos, int n);

int main() {
    int n;

    printf("Digite o numero de alunos: \n");
    scanf("%d", &n);
    getchar();

    // Alocando dinamicamente um array de structs para armazenar os dados dos alunos
    provas *alunos = (provas *)malloc(n * sizeof(provas));

    if (alunos == NULL) {
        printf("Erro de alocação de memória.\n");
        return 1;
    }


    preencher(alunos, n);
    mostrar_provas(alunos, n);


    free(alunos);

    return 0;
}

void preencher(provas *alunos, int n) {
    for (int i = 0; i < n; i++) {
        printf("\nDigite o nome do aluno %d: ", i + 1);
        fgets(alunos[i].nome_do_aluno, 50, stdin);


        printf("Digite a matrícula do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].matricula);
        getchar();

        printf("Digite as respostas do aluno %d (30 letras A, B, C, D ou E, sem espaços): ", i + 1);
        fgets(alunos[i].respostas, 30 + 1, stdin);


    }
}

void mostrar_provas(provas *alunos, int n) {
    printf("\n--- Dados das Provas ---\n");
    for (int i = 0; i < n; i++) {
        printf("\nAluno %d:\n", i + 1);
        printf("Nome: %s\n", alunos[i].nome_do_aluno);
        printf("Matrícula: %d\n", alunos[i].matricula);
        printf("Respostas: %s\n", alunos[i].respostas);
    }
}
