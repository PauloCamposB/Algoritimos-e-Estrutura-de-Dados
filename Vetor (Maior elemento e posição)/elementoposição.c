#include<stdio.h>
#include<math.h>

int main(){

    int n;
    scanf("%d",&n);

   int i,maior, posicao;
   float vetor[n];


    for (i = 0; i < n; i++){
        scanf("%f", &vetor[i]);
}
    maior = vetor[0];
    posicao = 0;

    for (i = 1; i < n; i++) {
        if (vetor[i] >= maior) {
            maior = vetor[i];
            posicao = i;
}
}
    printf("%d %d\n", maior, posicao);

}
