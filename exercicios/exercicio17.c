#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ordenarDecrescente(int vetor[], int tamanho) {
    int temp;
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if (vetor[i] < vetor[j]) {
                // Troca de posi��o para ordenar em ordem decrescente
                temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
}

int main() {
    int vetor1[5], vetor2[5];
    int vetor3[10]; // Vetor para armazenar a combina��o de vetor1 e vetor2

    // Inicializando a semente do gerador de n�meros aleat�rios
    srand(time(NULL));

    // Preenchendo vetor1 e vetor2 com n�meros aleat�rios
    for (int i = 0; i < 5; i++) {
        vetor1[i] = rand() % 100; // N�meros aleat�rios entre 0 e 99
        vetor2[i] = rand() % 100;
    }

    // Preenchendo vetor3 com os elementos de vetor1 e vetor2
    for (int i = 0; i < 5; i++) {
        vetor3[i] = vetor1[i];
        vetor3[i + 5] = vetor2[i];
    }

    // Ordenando vetor3 em ordem decrescente
    ordenarDecrescente(vetor3, 10);

    // Exibindo os vetores
    printf("Vetor 1: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vetor1[i]);
    }

    printf("\nVetor 2: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vetor2[i]);
    }

    printf("\nVetor combinado em ordem decrescente: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor3[i]);
    }

    return 0;
}
