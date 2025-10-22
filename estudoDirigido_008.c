#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>
#define MAX_PALAVRAS 100
#define TAM_PALAVRA 50


    void questao_1();
    void questao_2();
    void questao_3();
    void questao_4();
    void questao_5();
    void questao_6();
    void questao_7();
    void questao_8();
    void questao_9();
    void questao_10();
    void extra_1();
    void extra_2();


    void lerPares(int *, int *);
    void metodo0811(int *, int *);
    int acharQuantos(int, int, int, int *);
    int divisoresPares(int, int *);


int main(){


    int opcao;

    printf("\n----MENU----\n");
    printf("1- questao 1\n");
    printf("2- questao 2\n");
    printf("3- questao 3\n");
    printf("4- questao 4\n");
    printf("5- questao 5\n");
    printf("6- questao 6\n");
    printf("7- questao 7\n");
    printf("8- questao 8\n");
    printf("9- questao 9\n");
    printf("10- questao 10\n");
    printf("\n----EXTRAS----\n");
    printf("11- questao 1\n");
    printf("12- questao 2\n");

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


    case 4:
    questao_4();

    break;


    case 5:
    questao_5();

    break;


    case 6:
    questao_6();

    break;


    case 7:
    questao_7();

    break;


    case 8:
    questao_8();

    break;


    case 9:
    questao_9();

    break;


    case 10:
    questao_10();

    break;


    case 11:
    extra_1();

    break;

    case 12:
    extra_2();

    break;


    default:
        printf("\nOpcao invalidade, tente de novo");

    }

}


void questao_1(){

    int n, array[100];

    lerPares(&n, array);

    printf("\nValores lidos:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", array[i]);



}


void lerPares(int *n, int arranjo[]) {

    printf("Digite o tamanho do arranjo: ");
    scanf("%d", n);


    while (*n <= 0) {
        printf("Tamanho invalido! Deve ser positivo.\n");
        printf("Digite novamente o tamanho do arranjo: ");
        scanf("%d", n);
    }


    printf("Digite %d valores positivos e pares:\n", *n);
    for (int i = 0; i < *n; ) {
        int valor;
        scanf("%d", &valor);


        if (valor > 0 && valor % 2 == 0) {
            arranjo[i] = valor;
            i++;
        } else {
            printf("Valor invalido! Digite novamente:\n");
        }
    }
}






void questao_2(){

    FILE *entrada = fopen("DADOS.TXT", "r"); // peguei o msm arquivo que eu usei nos outros exercicios
    FILE *saida = fopen("PARES.TXT", "w");

    if (!entrada || !saida) {
        printf("Erro ao abrir arquivos!\n");
        return;
    }

    int valor, count = 0;


    while (fscanf(entrada, "%d", &valor) == 1) {
        if (valor > 0 && valor % 2 == 0) {
            count++;
        }
    }

    rewind(entrada);

    fprintf(saida, "%d\n", count);

    while (fscanf(entrada, "%d", &valor) == 1) {
        if (valor > 0 && valor % 2 == 0) {
            fprintf(saida, "%d\n", valor);
        }
    }

    fclose(entrada);
    fclose(saida);
    printf("%d valores pares positivos gravados em com sucesso\n", count);
}





void questao_3(){

    srand(time(NULL));

    FILE *arquivo = fopen("DADOS.TXT","w");
        if (arquivo == NULL) {
        printf("Erro ao criar o arquivo!\n");
        return;
    }



    int a, b;
    int n;
    int i = 0;

    printf("\nDigite um intervalo entre dois numeros: ");
    scanf("%d %d",&a,&b);
    if(a >= b){
        printf("\nDigite um intervalo onde A seja menor e diferente que B");
        return;
    }

    printf("\nAgora digite quantos numeros quer salvar dentro do arquivo: ");
    scanf("%d",&n);

    int array[n];

    while(i < n){
        array[i] = rand();

        if(array[i] >= a && array[i] <= b){
            fprintf(arquivo,"%d ",array[i]);
            i++;
            }
        }


    printf("\nArquivo salvo com sucesso");
    fclose(arquivo);

}



void questao_4(){
    FILE *arquivo = fopen("DADOS.TXT", "r");
    if (arquivo == NULL) {
        printf("Erro ao criar arquivo!\n");
        return;
    }

    int menor = INT_MAX; // coloquei isso para nao fazer a gambirra de chutar um numero muito alto
    int numero;

    while(fscanf(arquivo, "%d", &numero) == 1){
        if(numero % 2 == 0){
            if(numero < menor){
                menor = numero;
            }
        }
    }

    printf("\nO menor numero encontrado foi o %d",menor);

    fclose(arquivo);

}


void questao_5(){

    FILE *arquivo = fopen("DADOS.TXT", "r");
    if (arquivo == NULL) {
        printf("Erro ao criar arquivo!\n");
        return;
    }


    int maior = 0;
    int numero;

    while(fscanf(arquivo, "%d", &numero) == 1){
        if(numero % 2 != 0){
            if(numero % 3 == 0){
                if(numero > maior){
                maior = numero;

                }
            }
        }
    }


    printf("\nO maior numero encontrado foi o %d",maior);
    fclose(arquivo);


}

void questao_6(){

    FILE *arquivo = fopen("DADOS.TXT", "r");
    if (arquivo == NULL) {
        printf("Erro ao criar arquivo!\n");
        return;
    }


    float media = 0;
    int cont = 0;
    int numero;

    while(fscanf(arquivo, "%d", &numero) == 1){
        media += numero;
        cont++;
    }

    media = media/cont;

    printf("\nA media dos numeros foi de: %.3f",media);
    fclose(arquivo);

}


void questao_7() {
    FILE *arquivo = fopen("DADOS.TXT", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir arquivo!\n");
        return;
    }

    int numero_atual, numero_anterior;
    bool resp = true;
    int first_iteration = 1;

    while (fscanf(arquivo, "%d", &numero_atual) == 1) {
        if (first_iteration) {
            first_iteration = 0;
        } else {
            if (numero_atual < numero_anterior) {
                resp = false;

            }
        }
        numero_anterior = numero_atual;
    }

    if (resp) {
        printf("\nEsta em ordem crescente");
    } else {
        printf("\nNao esta em ordem crescente");
    }

    fclose(arquivo);
}

void questao_8() {

    int array[100];
    int tamanho;

    FILE *arquivo = fopen("DADOS.TXT", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }


    fscanf(arquivo, "%d", &tamanho);


    for (int i = 0; i < tamanho; i++) {
        fscanf(arquivo, "%d", &array[i]);
    }
    fclose(arquivo);


    int n,  comeco;

    printf("Digite o valor a ser procurado: ");
    scanf("%d", &n);
    printf("Digite a posicao inicial para a procura: ");
    scanf("%d", &comeco);


    int encontrado = 0;
    for (int i = comeco; i < tamanho; i++) {
        if (array[i] == n) {
            encontrado = 1;
            return;
        }
    }


    if (encontrado) {
        printf("O valor %d foi encontrado no arranjo.\n", n);
    } else {
        printf("O valor %d nao foi encontrado no arranjo.\n", n);
    }
}





void questao_9(){

    int arranjo[100];
    int n;
    int valor;
    int posicao = -1;


    FILE *arquivo = fopen("DADOS.TXT", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo DADOS.TXT\n");
        return;
    }


    fscanf(arquivo, "%d", &n);


    for (int i = 0; i < n; i++) {
        fscanf(arquivo, "%d", &arranjo[i]);
    }
    fclose(arquivo);


    printf("Digite o valor inteiro a ser procurado: ");
    scanf("%d", &valor);


    for (int i = 0; i < n; i++) {
        if (arranjo[i] == valor) {
            posicao = i;
            return;
        }
    }


    if (posicao != -1) {
        printf("O valor %d foi encontrado na posicao %d\n", valor, posicao);
    } else {
        printf("O valor %d nao foi encontrado no arranjo\n", valor);
    }

}

void questao_10() {
    int arranjo[100];
    int n;
    int valor;
    int inicio_busca = 0;


    FILE *arquivo = fopen("DADOS.TXT", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo DADOS.TXT\n");
        return;
    }


    fscanf(arquivo, "%d", &n);


    for (int i = 0; i < n; i++) {
        fscanf(arquivo, "%d", &arranjo[i]);
    }
    fclose(arquivo);


    printf("Digite o valor inteiro a ser procurado: ");
    scanf("%d", &valor);


    int vezes = acharQuantos(valor, inicio_busca, n, arranjo);


    if (vezes > 0) {
        printf("O valor %d foi encontrado %d vezes no arranjo.\n", valor, vezes);
    } else {
        printf("O valor %d nao foi encontrado no arranjo.\n", valor);
    }
}

int acharQuantos(int procurado, int inicio, int fim, int arranjo[]) {
    int contador = 0;
    for (int i = inicio; i < fim; i++) {
        if (arranjo[i] == procurado) {
            contador++;
        }
    }
    return contador;
}



void extra_1() {

    int n, d[1000], q;

    printf("Digite um numero: ");
    scanf("%d", &n);

    q = divisoresPares(n > 0 ? n : -n, d);

    printf("Divisores pares de %d: ", n, q);
    for (int i = 0; i < q; i++) printf("%d ", d[i]);

    FILE *f = fopen("DIVISORES.TXT", "w");
    if (f) {
        fprintf(f, "%d\n", q);
        for (int i = 0; i < q; i++) fprintf(f, "%d\n", d[i]);
        fclose(f);
        printf("\nArquivo salvo");
    }
}

int divisoresPares(int n, int d[]) {

    int c = 0;

    for (int i = 2; i <= n; i += 2)
        if (n % i == 0) d[c++] = i;
    return c;
}



int palavraValida(const char *palavra) {
    if (strlen(palavra) == 0) return 0;

    char primeira = tolower(palavra[0]);
    char ultima = tolower(palavra[strlen(palavra) - 1]);

    return (primeira != 'e' && ultima != 'e');
}


void extra_2(){

       FILE *arquivo = fopen("PALAVRAS.TXT", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir PALAVRAS.TXT\n");
        return;
    }

    char palavras[MAX_PALAVRAS][TAM_PALAVRA];
    char validas[10][TAM_PALAVRA];
    int total = 0, encontradas = 0;


    while (fscanf(arquivo, "%49s", palavras[total]) == 1 && total < MAX_PALAVRAS) {
        total++;
    }
    fclose(arquivo);


    for (int i = 0; i < total && encontradas < 10; i++) {
        if (palavraValida(palavras[i])) {
            strcpy(validas[encontradas], palavras[i]);
            encontradas++;
        }
    }


    if (encontradas == 0) {
        printf("nenhuma palavra encontrada.\n");
    } else {
        printf("Palavras validas encontradas (%d):\n", encontradas);
        for (int i = 0; i < encontradas; i++) {
            printf("%d: %s\n", i+1, validas[i]);
        }
    }

}




