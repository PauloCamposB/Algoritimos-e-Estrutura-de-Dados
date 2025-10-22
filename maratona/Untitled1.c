#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>



    void questao_1();
    void questao_2();
    void questao_3();




int main(){


    int opcao;

    printf("\n----MENU----\n");
    printf("1- questao 1\n");
    printf("2- questao 2\n");
    printf("3- questao 3\n");

    printf("\nEscolha uma questao: ");
    scanf("%d",&opcao);


    switch (opcao){


    case 1:
    questao_1();

    break;


    case 2:
    questao_2();

    break;

    case 3:
    questao_3();

    break;

    default:
        printf("\nOpcao invalidade, tente de novo");

    }

}


void questao_1(){

    int n;
    printf("Digite quantos numeros vc quer:\n");
    scanf("%d",&n);

    int vetor[n];

    for(int i = 0; i < n; i++){
        scanf("%d",&vetor[i]);
    }

    int valores_menores = 0;
    int soma = 0;
    int cont = 0;

    for(int j = 0; j < n; j++){
        if(vetor[j] != vetor[0] && vetor[j] != vetor[n-1]){
            soma += vetor[j];
        }
            cont++;
    }

    double media = soma/cont;

   for(int i = 0; i < n/2; i++){
        if(vetor[i] < media){
            valores_menores++;
        }
   }

    printf("tamanho do array = %d\n",n);
    printf("soma: %d\n",soma);
    printf("A quantidade de numeros menores que a media e: %d\n",valores_menores);

}

void questao_2(){


    int a,b;

    printf("Digite quantas linhas e colunas tera sua matriz:\n");
    scanf("%d %d",&a,&b);
    if(a != b){
        printf("A matriz nao e quadrada!!\n");
        return;
    }

    int matriz[a][b];

    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            scanf("%d",&matriz[i][j]);
        }
    }

    int inf = 0;
    int sup = 0;
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            if(i < j){
                sup += matriz[i][j];
            }else if (j < i){
                inf += matriz[i][j];
            }
        }
    }

    if(sup > inf){
        printf("superior maior");
    }else{
        printf("inferior maior");
    }

}

void questao_3(){

    int tam = 0;
    int n;

    printf("digite quantas palavras:\n");
    scanf("%d",&n);

    int cont[n];
    char palavra[n][100];
    getchar();

    for(int p = 0; p < n; p++){
        fgets(palavra[p], 100, stdin);
        cont[p] = 0;
    }

    int i = 0;
    int j = 0;
    while(palavra[i][j] != '\0'){
        while(palavra[i][j] != '\0'){
        if(palavra[i][j] == 'a' || palavra[i][j] == 'e' || palavra[i][j] == 'i' || palavra[i][j] == 'o' || palavra[i][j] == 'u'){
            if(palavra[i][j+1] == 'a' || palavra[i][j+1] == 'e' || palavra[i][j+1] == 'i' || palavra[i][j+1] == 'o' || palavra[i][j+1] == 'u'){
                if(palavra[i][j] == 'a'){
                    cont[i]++;
                    palavra[i][j] = 'A';

                }else if(palavra[i][j] == 'e'){
                    cont[i]++;
                    palavra[i][j] = 'E';

                }else if(palavra[i][j] == 'i'){
                    cont[i]++;
                    palavra[i][j] = 'I';

                }else if(palavra[i][j] == 'o'){
                    cont[i]++;
                    palavra[i][j] = 'O';

                }else if(palavra[i][j] == 'u'){
                    cont[i]++;
                    palavra[i][j] = 'U';

                    }
                }
            }
        j++;
        }
    i++;
    j = 0;
    }


    for(int p = 0; p < n; p++){
        printf("%d\n",cont[p]);
        printf("%s\n", palavra[p]);
    }

}
