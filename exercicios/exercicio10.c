#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para preencher os vetores
void preencherVetor(int v1[], int v2[]) {
    for (int i = 0; i < 10; i++) {
        v1[i] = rand() % 100;
    }
    for (int j = 0; j < 5; j++) {
        v2[j] = rand() % 10;
    }
}

void somadovetortres(int *a, int b[], int c[]){
    int soma = 0;
    for (int i = 0; i < 5; i ++){
        soma+= b[i];
    }
     int indexC = 0;

    // Percorre o vetor a e preenche c com cada valor par de a somado a soma
    for (int i = 0; i < 10; i++) {
        if (a[i] % 2 == 0) {  // Verifica se a[i] é par
            if (indexC < 10) { // Certifica-se de que indexC está dentro dos limites de c
                c[indexC] = a[i] + soma;
                indexC++;
            } else {
                break;  // Para de preencher se c estiver cheio
            }
        }
    }

    // Caso c não tenha sido totalmente preenchido, completa com zeros
    for (; indexC < 10; indexC++) {
        c[indexC] = 0;
    }
}


void divisoresImpares(int *a, int b[], int c[]){
    int quantidade = 0;
     int indexC = 0;

    for (int j = 0; j < 10;){
    for (int i = 0; i < 5; i++) {
          if (a[i] % 2 != 0) {  // Verifica se a[i] é impar
            if (indexC < 10) { // Certifica-se de que indexC está dentro dos limites de c
                if (a[j] % b[i] == 0){
                  quantidade++;
                  c[indexC] = quantidade;
                   indexC++;
            } else {
                j++;
                break;

            }
        }



    for (/*nao tem nada declarado*/; indexC < 10; indexC++) {
        c[indexC] = 0;
    }
}
}
}
}



int main() {
    int primeiro_vetor[10];
    int segundo_vetor[5];

    srand(time(NULL));

    // Chama a função para preencher os vetores
    preencherVetor(primeiro_vetor, segundo_vetor);


    // Exibe o primeiro vetor
    printf("Primeiro vetor: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", primeiro_vetor[i]);
    }
    printf("\n");

    // Exibe o segundo vetor
    printf("Segundo vetor: ");
    for (int j = 0; j < 5; j++) {
        printf("%d ", segundo_vetor[j]);
    }
    printf("\n");


    int terceiro_vetor[10];
    somadovetortres(primeiro_vetor, segundo_vetor,terceiro_vetor);


    printf("terceiro vetor: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", terceiro_vetor[i]);
    }

    int quarto_vetor[10];
    divisoresImpares(primeiro_vetor, segundo_vetor, quarto_vetor);

    printf("\n");

     printf("quarto vetor: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", quarto_vetor[i]);
    }


}
