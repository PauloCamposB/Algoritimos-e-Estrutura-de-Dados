#include<stdio.h>

int main(){

    int x, y;
    int menor, maior, soma;


    printf("\nDigite o valor de x e depois o de y:\n");
    scanf("%d %d", &x, &y);


    if (x < y) {
        menor = x;
        maior = y;
    } else {
        menor = y;
        maior = x;
    }



    for(int i = menor; i <= maior ; i++){

    if (i % 13 != 0){
    printf(" %d", i);


}
}


}














