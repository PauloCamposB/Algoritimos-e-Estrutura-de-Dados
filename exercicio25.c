#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));


    float maior = 0;
    float vetor1[15];
    printf("O primeiro vetor e: ");
    for(int i = 0; i < 15; i++){
        vetor1[i] = rand()%100;
        printf(" %.f ", vetor1[i]);
    }

    for(int i = 0; i < 15; i ++){
        if (vetor1[i] > maior){
            maior = vetor1[i];
        }
    }
    printf("\n o maior numero do vetor e: %.f \n", maior);

    float divisao = 0;
    printf("\n O resultado das divisoes sao: ");
    for(int i = 0; i < 15; i++){
       divisao = vetor1[i]/maior;
       printf(" %.2f", divisao);
    }

}
