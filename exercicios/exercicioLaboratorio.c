#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
    srand(time(NULL));
    int n;
    int m;
    scanf("%d %d", &n, &m);

    preencherMatriz(n,m);


}

int preencherMatriz(int a, int b){

    int matriz[3][2];

    for(int i = 0; i <a; i++){
        for (int j = 0;j<b;j++){
          scanf("%d",&matriz[i][j]);
        }
    }
    somaColunas(a,b,matriz);
}

void somaColunas(int a, int b, int matriz[a][b]) {
    int soma;
    for (int j = 0; j < b; j++) {
        soma = 0;
        for (int i = 0; i < a; i++) {
            soma += matriz[i][j];
        }
        printf(" %d", soma);
    }
}
