#include<stdio.h>
#include<math.h>

int main(){

    int n; // n = alunos
    scanf("%d",&n);
    float notas[n];
    float maior, menor, media;

    preenchernotas(notas, n); // atualizar as notas
    processarnotas(notas, n, &maior, &menor, &media); // vamos passar as notas atualizadas e o endereço das variaveis para mudar elas dentro da função

    printf("%.1f %.1f %.1f\n", maior, menor, media);



}
        // contador para ler as notas dos alunos
void preenchernotas( float notas[], int n){
        for (int i = 0; i < n; i++) {
            scanf("%f", &notas[i]);



}
}


void processarnotas(float notas[], int n, float *maior, float *menor, float *media){
    *maior = notas[0]; // colocar a array inicial como menor e maior
    *menor = notas[0];
    float soma = 0.0;

        for( int i = 0; i < n ; i++ ){
            if (notas[i] > *maior) {
            *maior = notas[i];
}
            if (notas[i]< *menor){
                *menor = notas[i];
}
        soma += notas[i];
}

        *media = soma/n;
}
