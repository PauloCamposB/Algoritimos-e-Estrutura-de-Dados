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


    printf("\nDigite um numero inteiro : ");
    scanf("%d",&n);

    if( n % 2 == 0 && n >= 0){
        printf("\nEsse numero e par e positivo");
    }

    if( n % 2 != 0 && n < 0){
        printf("\nEsse numero e impar e negativo");
    }
}

void questao_2(){

    int n;

    printf("\nDigite um numero: ");
    scanf("%d",&n);


    if(n % 2 == 0 && n < -25){
        printf("\nEsse numero e par e menor que -25");
    }
    if(n % 2 != 0 && n > 25){
        printf("\nEsse numero e impar e maior que 25");
    }
}

void questao_3(){

    int n;

    printf("\nDigite um numero: ");
    scanf("%d",&n);

    if( n >= 20 && n <= 55){
        printf("\nEsse numero pertence ao intervalo aberto entre 20 e 55");
    }


}

void questao_4(){

    int n;

    printf("\nDigite um numero: ");
    scanf("%d",&n);

    if( n > 20 && n < 55){
        printf("\nEsse numero pertence ao intervalo fechado entre 20 e 55");
    }



}

void questao_5(){

    int n;

    printf("\nDigite um numero: ");
    scanf("%d",&n);

    if(n <= 30 && n >= 20){
        printf("\nesse numero pertence a intersecao");

        }else if(n >= 10 && n <= 30 || n >= 20 && n <= 40){

         printf("\nO numero pertence a pelo menos 1 intervalo");
        }

}

void questao_6(){

    int n1, n2;


    printf("\nDigite dois numeros: ");
    scanf("%d %d",&n1,&n2);

    if(n1 % 2 != 0 && n2 % 2 == 0){
        printf("\nO primeiro numero e impar e o segundo e par");
    }else if(n1 % 2 == 0 && n2 % 2 == 0){
    printf("\nO primeiro numero nao e impar");
    }else if(n2 % 2 != 0 && n1 % 2 != 0){
    printf("\nO segundo numero nao e par");
    }else if(n1 % 2 == 0 && n2 % 2 != 0){
    printf("\nNem o primeiro numero e impar nem o segundo e par");
    }

}

void questao_7(){

    int n1, n2;

    printf("\nDigite dois numeros: ");
    scanf("%d %d",&n1,&n2);

    if(n1 % 2 == 0 && n1 < 0 && n2 % 2 != 0 && n2 > 0){
        printf("\no primeiro numero e par e negativo e o segundo e impar e positivo");
    }



}

void questao_8(){

    float n1, n2;

    printf("\nDigite dois numeros: ");
    scanf("%f %f",&n1,&n2);

    n2 = n2/4;

    if(n1 < n2){
        printf("\nO primeiro numero e menor que um quarto do segundo numero");
    }else if(n1 == n2){
        printf("\nO primeiro numero e igual a um quarto do segundo numero");
    }else if( n1 > n2){
        printf("\nO primeiro numero e maior que um quarto do segundo numero");
    }

}

void questao_9(){

    float n1, n2, n3;

    printf("\nDigite tres numeros: ");
    scanf("%f %f %f",&n1,&n2,&n3);

    if (n1 < n2 < n3 || n1 > n2 > n3){
        printf("\nO segundo numero esta entre o primeiro e o ultimo");


    }





}

void questao_10(){



}

void extra_1(){




}

void extra_2(){


}
