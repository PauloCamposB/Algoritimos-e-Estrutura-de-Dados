/*Faça um programa que preencha uma matriz 20 x 10 com números inteiros, e some cada uma das colunas,
armazenando o resultado da soma em um vetor.
A seguir, o programa deverá multiplicar cada elemento da matriz pela soma da coluna e mostrar a matriz resultante.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));
    int matriz[20][10];
    int vetor[20];
    int soma = 0;
    int multiplicacao[20][10];


    for(int i=0; i<20; i++){
        for(int j =0; j<10; j++){
            matriz[i][j] = rand()%100;
        }
    }

    for(int j = 0; j<10; j++){
      soma = 0;
            for(int i = 0; i < 20; i++){
              soma += matriz[i][j];
        }

        vetor[j] = soma;
    }



    for(int j = 0; j < 10; j++){
        for(int i = 0; i <20; i++){
            multiplicacao[i][j] = vetor[j] * matriz[i][j];
        }
    }



}
