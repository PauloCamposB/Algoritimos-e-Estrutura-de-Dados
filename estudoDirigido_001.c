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
    int quadrado;
    int area;

    printf("\nDigite um numero inteiro e positivo: ");
    scanf("%d",&n);

    quadrado = n*3;
    area = quadrado*quadrado;

    printf("\nO valor da area do outro quadrado vai ser de: %d",area);
    printf("\n");
}

void questao_2(){

    float n;
    float quadrado;
    float area;
    float perimetro;

    printf("\nDigite um numero inteiro e positivo: ");
    scanf("%f",&n);

    quadrado = n/2;
    area = quadrado*quadrado;
    perimetro = quadrado*4;


    printf("\nO valor da area desse quadrado seria de %.2f e o perimetro seria de %.2f1",area,perimetro);

}

void questao_3(){

    float n1,n2;
    float lado1, lado2;
    float area;

    printf("\nDigite um numero inteiro: ");
    scanf("%f",&n1);

    printf("\nDigite outro numero inteiro:");
    scanf("%f",&n2);

    lado1 = n1*2;
    lado2 = n2*2;

    area = lado1*lado2;


    printf("\nos lados do retangulo sao %.2f e %.2f e sua area e %.2f",lado1,lado2,area);



}

void questao_4(){

    float n1, n2;
    float lado1, lado2;
    float area, perimetro;

    printf("\nDigite dois numeros inteiros: ");
    scanf("%f %f",&n1,&n2);


    lado1 = n1*0.25;
    lado2 = n2*0.25;

    area = lado1*lado2;
    perimetro = (lado1*2)+(lado2*2);

    printf("\nA area do rentagulo e %.3f e o perimetro dele e %.2f",area , perimetro);


}

void questao_5(){

    float n1, n2;
    float base, altura;
    float area;

    printf("\nDigite dois numeros inteiros a base e a altura respectivamente : ");
    scanf("%f %f",&n1,&n2);

    altura = n2*2;
    base = n1;
    area = (base*altura)/2;

    printf("\nA area do tringulo vai ser %.2f",area);

}

void questao_6(){



    float n;
    float area, perimetro, altura;

    printf("\nDigite um numero real: ");
    scanf("%f",&n);

    n = n*0.33;
    area = (sqrt(3)* pow(n,2))/4;

    altura = (n*sqrt(3))/2;

    perimetro = n*3;

    printf("\nA area do triangulo e %.2f, o perimetro e %.2f e a altura e %.2f",area,perimetro,altura);
    printf("\n");

}
void questao_7(){

    float n;
    float volume;

    printf("\nDigite um numero inteiro e positivo: ");
    scanf("%f",&n);
    n = n*4;
    volume = pow(n,3);

    printf("\nO valor do volume do cubo vai ser de: %.2f",volume);
    printf("\n");



}

void questao_8(){

    float n1, n2, n3;
    float volume;

    printf("\nDigite tres numeros reais: ");
    scanf("%f %f %f",&n1,&n2,&n3);

    n1 = n1*5;
    n2 = n2*5;
    n3 = n3*5;

    volume = n1*n2*n3;

    printf("\nO valor do volume vai ser de %.2f", volume);
}

void questao_9(){

    float n;
    float area;
    float pi = 3.14;
    printf("\nDigite um numero inteiro para o raio: ");
    scanf("%f",&n);

    n = n*4;
    area = (pi*pow(n,2))/2;

    printf("\nA area do semi circulo vai ser de %.2f",area);

}

void questao_10(){

    float n;
    float volume;
    float pi = 3.14;

    printf("\nDigite o raio da esfera: ");
    scanf("%f",&n);

    n = n*0.625;
    volume = 1.33*pi*pow(n,3);

    printf("\nO volume da esfera vai ser de %.3f",volume);


}

void extra_1(){

    float n;
    float raio;
    float pi = 3.14;

    printf("\nDigite um numero que sera a area de uma circunferencia: ");
    scanf("%f",&n);

    n = n*7;

    raio = sqrt(n/pi);

    printf("\nO raio da circunferencia vai ser de: %.2f",raio);


}

void extra_2(){

    float n;
    float raio, pi = 3.14;
    float superficie;

    printf("\nDigite o volume de uma esfera: ");
    scanf("%f",&n);

    n = n*0.6;

    raio = cbrt((3*n)/(4*pi));

    superficie = 4*pi* pow(raio, 2);


    printf("\nO raio da esfera e: %.2f e sua area de superficie e igual a: %.2f",raio,superficie);


}
