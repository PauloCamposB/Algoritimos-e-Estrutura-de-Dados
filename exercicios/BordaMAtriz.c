#include<stdio.h>
#include<stdlib.h>


int main(){

    int n, m;
    scanf("%d %d ", &n,&m);
    int matriz[n][m];



    preencherMatriz(n,m,matriz);
    int soma = somabordaexterna(n,m,matriz);
    printf("%d", soma);

}

void preencherMatriz(int n,int m, int matriz[][m]){

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

}


int somabordaexterna(int n, int m, int matriz[][m]) {
    int soma = 0;


    for (int j = 0; j < m; j++){
        soma += matriz[0][j] + matriz[n-1][j];
    }

    // Soma dos elementos da borda esquerda e direita, excluindo os cantos
    for (int i = 1; i < n - 1; i++) {
        soma += matriz[i][0] + matriz[i][m-1];
    }

    return soma;
}

