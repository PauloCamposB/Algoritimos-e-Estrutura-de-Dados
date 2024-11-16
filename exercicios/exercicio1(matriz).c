#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
    srand(time(NULL));
    int matriz[3][5];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            matriz[i][j] = rand()%100;
            printf(" %d", matriz[i][j]);
        }

    }


}
