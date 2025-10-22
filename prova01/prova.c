#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

    void questao_1();
    void questao_2();
    void questao_3();
    void questao_4();
    void questao_5();
    void questao_6();
    void questao_7();
    void questao_8();

    double calcular_soma(int);
    void verificar_diferenca(int);
    int divisivel_por_sete(int);
    int f_03(int);
    void verificarParequema(char *);







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




    default:
        printf("\nOpcao invalidade, tente de novo");

    }

}


void questao_1(){

    int n = 8, x = 4, y = n, z = 0;

    while(z<y){
        x = x + 3*z - 1;
        if(x % 7 == 0){
            y = y + 1;
        }else{
            printf("%d ", x);
        }
        z = z+1;
    }

}



void questao_2(){

    char s[] = "A12*3-d4+(B+C)/E5";
    int x = 0;
    for(x = strlen(s)/2; x<strlen(s); x = x+1){
        if('A' <= s[x] && s[x] <= 'Z'){
            printf("%c ",s[x]);
            x = x + 2;
        }
    }

}

void questao_3(){

    printf("f_03(%d) = %d\n",10,f_03(10));

}

int f_03(int x){
    int y = x;
    if(x%2 == 0){
        y = f_03(x-1);
    }else if(x > 2){
        y = y+f_03(x-2);
    }
    return y;

}

void questao_4(){

    int n = 123321, x = 0, y = 0, z = 0, p = 1;
    while(p <= n){
        p = p * 10;
        z = z + 1;
    }
    p = p/10;
    z = z/2;
    while(x<z){
        if(n/p == n % 10){
            y = y + 1;
            n = n % p/10;
            p = p/100;
            x = x + 1;
        }else{
            x = z;
        }
    }

    printf("X = %d\nY = %d",x,y);
}

void questao_5(void) {

    int n=5, y=3, x=1, impar=1;
    printf("%d\t%d\n", x, y);

    x = x + 1;  // (I)

    while (x <= n)  // (II)
    {
        y = y + impar;
        printf("%d\t%d\n", x, y);
        impar = 2 * x - 1;
        x = x + 1;  // (III)
    }
}

void questao_6(){

    int n;

    printf("Digite um numero para descobrir se ele e divisivel por 7: ");
    scanf("%d",&n);

    divisivel_por_sete(n);


}

int divisivel_por_sete(int n){

    int valor_original = n;
    int resp = 1;
    int x = 1;
    int y = 1;

    while(resp > 0){
        x = (n % 10)*2;
        y = n / 10;

        resp = y - x;
        n = resp;
    }



   if(resp == -7 || resp == -14 || resp == 0){
        printf("%d e divisel por 7",valor_original);
   }else{
        printf("%d nao e divisel por 7",valor_original);

   }


}


void questao_7() {
    int n;
    printf("Digite o numero de termos (n): ");
    scanf("%d", &n);

    verificar_diferenca(n);
}

void verificar_diferenca(int n){

    double soma_anterior = 0.0;
    double soma_atual = 0.0;
    int encontrou = 0;
    int termos_usados = 0;
    int k = 1;

    while (k <= n && !encontrou) {
        double termo = 1.0 / k;
        if (k % 2 == 1) {
            soma_atual += termo;
        } else {
            soma_atual -= termo;
        }

        termos_usados = k;

        if (k > 1) {
            double diferenca = fabs(soma_atual - soma_anterior);
            if (diferenca < 0.1) {
                encontrou = 1;
            }
        }

        soma_anterior = soma_atual;
        k++;
    }

    if (encontrou) {
        printf("A diferença ficou menor que 0.1 apos %d termos (de %d totais).\n", termos_usados, n);
    } else {
        printf("A diferença nao ficou menor que 0.1 nos primeiros %d termos.\n", n);
    }
}







void questao_8() {
    char frase[100];
    getchar();

    printf("Digite duas palavras separadas por espaco: ");
    fgets(frase, 100, stdin);

    verificarParequema(frase);
}

void verificarParequema(char texto[]){
    int posicao = 0, tamanhoPalavra1 = 0;


    while (texto[posicao] != '\0' && texto[posicao] != ' ') {
        tamanhoPalavra1++;
        posicao++;
    }

    if (texto[posicao] != ' ') {
        printf("Texto invalido. Deve conter duas palavras.\n");
        return;
    }


    posicao++;
    int inicioPalavra2 = posicao;

    int tamanhoPalavra2 = 0;
    while (texto[posicao] != '\0') {
        tamanhoPalavra2++;
        posicao++;
    }

    int encontrouParequema = 0;
    int silabaMaxima = tamanhoPalavra1 < tamanhoPalavra2 ? tamanhoPalavra1 : tamanhoPalavra2;


    for (int tamanhoSilaba = 2; tamanhoSilaba <= silabaMaxima && !encontrouParequema; tamanhoSilaba++) {
        int saoIguais = 1;
        for (int letra = 0; letra < tamanhoSilaba && saoIguais; letra++) {
            char caractere1 = texto[tamanhoPalavra1 - tamanhoSilaba + letra];
            char caractere2 = texto[inicioPalavra2 + letra];
            saoIguais = (caractere1 == caractere2);
        }
        encontrouParequema = saoIguais;
    }

    if (encontrouParequema) {
        printf("tem parequema.\n");
    } else {
        printf("nao tem parequema.\n");
    }
}






