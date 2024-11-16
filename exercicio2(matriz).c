#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));

    int matriz[2][4];
    printf("os numeros da matriz sao:");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            matriz[i][j]= rand()%20;
            printf(" %d", matriz[i][j]);
        }
    }
    printf("\n");

    int elementos;
    printf("os numeros entre 12 e 20 sao: ");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            if(matriz[i][j] >= 12 && matriz[i][j] <=20){
                printf(" %d", matriz[i][j]);
            }

}
}
    printf("\n");

    float soma = 0;
    float media = 0;
    int cont = 0;
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < 4; j++){
                if(matriz[i][j] % 2 == 0){
                    soma = soma+matriz[i][j];
                    cont++;
        }

    }
}
    media = soma/cont;
    printf("a media dos numeros pares sao: %.2f", media);
    printf("\n");




}
