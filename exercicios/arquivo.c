#include<stdio.h>
#include<stdlib.h>

int main(){

    FILE *f;
    f = fopen("H: \arquivo.txt", "W");
    if (f == NULL){
        printf("ERRO fatal!!\n");
        system("pause");
        exit(1);

    }

    system("pause");
    return 0;

}
