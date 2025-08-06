#include<stdio.h>
#include<stdlib.h>
#include <math.h>


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

    int fatorial_ex2(int);
    double calcular_f(int n);
    int fatorial(int n);




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

    int n;
    int numeros = 0;


    printf("\nDigite um numero inteiro: \n");
    scanf("%d",&n);

    for(int i = 0; i <= n; i++){
        if(numeros % 3 == 0 && numeros != 0){
        printf("%d\t",numeros);

        }
    numeros += 3;
    }


}

void questao_2(){

    int n;
    int i = 0;
    int numeros = 0;

    printf("\nDigite um numero inteiro: \n");
    scanf("%d",&n);

    while( i < n){

    if(numeros % 3 == 0 && numeros % 5 == 0 && numeros != 0){
        printf("%d\t",numeros);
        i++;
    }


    numeros++;
    }



}

void questao_3(){

    int n;
    int numero;



    printf("\nDigite um numero inteiro: \n");
    scanf("%d",&n);

    for(int i = n; i > 0; i--){
        printf("%d\t",numero = pow(4,i));

    }


}

void questao_4(){

    int n;
    int numeros = 1;


    printf("\nDigite um numero inteiro: \n");
    scanf("%d",&n);

    for(int i = 1; i <= n; i++){
        numeros = 3 * i ;
        printf("1/%d\t",numeros); //talvez eu esteja so printando a saida necessaria, pois nao tem nenhum calculo

    }



}

void questao_5(){

    int n;
    int x;
    int numero;
    int j = 2;

    printf("\nDigite um numero inteiro: \n");
    scanf("%d",&x);

    printf("\nDigite a quantidade de vezes: ");
    scanf("%d",&n);

    printf("1\t");
    for(int i = 1; i <= n; i++){
    printf("1/%d,\t",numero = pow(x,j));
    j = j * 2;
    }


}

void questao_6(){


    int n;
    int i = 0;
    int numeros = 0;
    int soma = 0;

    printf("\nDigite um numero inteiro: \n");
    scanf("%d",&n);

    while( i < n){

    if(numeros % 3 == 0 && numeros % 4 != 0 && numeros != 0){
        soma += numeros;
        printf("%d\t",numeros);
        i++;
    }


    numeros++;
    }
}


void questao_7() {
    int n, i = 1, cont = 0;
    float total = 0;

    printf("\nDigite um numero inteiro: \n");
    scanf("%d", &n);

    while(cont < n) {
        int numero = 4 * i++;
        if(numero % 5 != 0) {
            float soma = 1.0 / numero;
            printf("%.2f +\t", soma);
            total += soma;
            cont++;
        }
    }
    printf("total = %.2f", total);
}


void questao_8(){

    int n;
    int x = 5;
    int total = 0;

    printf("\nDigite um numero inteiro: ");
    scanf("%d",&n);

    for(int i = 0; i < n; i++){
        x += i;
        printf("+");
        printf("%d ",x);
        total += x;
    }

    printf("Total = %d",total);

}

void questao_9(){

    int n;
    int x = 25;
    int total = 0;

    printf("\nDigite um numero inteiro: ");
    scanf("%d",&n);

    for(int i = 0; i < n; i++){
        x = pow(5+i,2);
        printf("+");
        printf("%d ",x);
        total += x;
    }

    printf("Total = %d",total);

}

void questao_10(){

    int n;
    int x = 3;
    int total;
    int i;


    printf("\nDigite um numero inteiro: ");
    scanf("%d",&n);

    for(i = 0; i < n; i++){
        x += i;
    }

    while(i > 0){
    i--;
    printf("+1/%d\t",x);
    x = x-i;
}

}

void extra_1(){

    int n;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n > 0) {
        printf("O fatorial de %d e: %d\n", n, fatorial(n));
    }
}


int fatorial(int n) {


    int resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;



}



int fatorial_ex2(int n) {
    int resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

double calcular_f(int n) {
    double resultado = 1.0;
    printf("\nf(%d) = ", n);

    for (int i = 1; i <= n; i++) {
        if (i > 1) {
            printf(" * ");
        }
        printf("(1 + %d/%d!)", 2 * i, (2 * i + 1));
        resultado *= (1.0 + (2.0 * i) / fatorial_ex2(2 * i + 1));
    }

    printf("\n");
    return resultado;
}

void extra_2() {
    int n;

    printf("\nDigite um numero inteiro: ");
    scanf("%d", &n);

    double resultado = calcular_f(n);
    printf("\nO resultado de f(%d) e: %.6lf\n", n, resultado);
}





