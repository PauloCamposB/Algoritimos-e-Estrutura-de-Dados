#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));

    int matriz[6][3];
    int maior = 0;
    int menor = 999;

    for (int i = 0; i < 6; i++){
        for(int j = 0; j < 3; j++){
            matriz[i][j]= rand()%100;
            printf(" %d ", matriz[i][j]);
        }
    }
    for (int i = 0; i < 6; i++){
        for(int j = 0; j < 3; j++){
            if(matriz[i][j] > maior){
                maior = matriz[i][j];
        }
    }
}

    for (int i = 0; i < 6; i++){
        for(int j = 0; j < 3; j++){
            if(matriz[i][j] < menor){
                menor = matriz[i][j];
        }
    }
}
    printf("\no maior valor e: %d \n", maior);
    printf("o menor valor e: %d",menor);


}
