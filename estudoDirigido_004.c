#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

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

    int contar_string(char []);
    char mostrar_letras(char [], char []);
    int contar_stringQ5(char []);
    char mostrar_letrasQ6(char [], char []);
    int cadeia_pares(char []);
    void alfanumericos(char [],char []);
    void alfanumericos9(char [],char [], int *);
    void contar_alfanumericos(char []);



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





    default:
        printf("\nOpcao invalidade, tente de novo");

    }

}


void questao_1(){

    int n;
    double a,b;
    int cont = 0;
    int cont2 = 0;

    printf("\nDigite a quantidade de valores reais: ");
    scanf("%d",&n);

    printf("\nDigite o intervalo fechado dos numeros: ");
    scanf("%lf %lf",&a,&b);

   double x[n];

    printf("\nDigite os numeros: ");
    for(int i = 0; i<n; i++){
        scanf("%lf",&x[i]);
            if(x[i] > a && x[i] < b){
                    cont++;
            }else{
            cont2++;

            }
   }

        printf("\nA quantidade de numeros que pertencem ao intervalo e: %d numeros",cont);
        printf("\nA quantidade de numeros que nao pertencem ao intervalo e: %d numeros",cont2);

}

void questao_2(){


    int cont = 0;
    int i = 0;
    char string[100];
    getchar();



    printf("\nDigite uma sequencia de caracteres: ");
    fgets(string,100,stdin);



    while(string[i] != '\0'){
        if(string[i] > 'c' && string[i] < 'p'){
                cont++;
        }

    i++;
    }

    printf("\n");
    printf("\nA quantidade de caracters maiores que c e menores que p sao %d ",cont);
    printf("\n");


}




void questao_3(){

    char string[100];
    getchar();

    printf("\nDigite uma sequencia de caracteres: ");
    fgets(string,100,stdin);



    printf("\nA quantidade de caracters maiores que c e menores que p sao %d \n", contar_string(string));



}

int contar_string(char string[]){

    int i = 0;
    int cont = 0;

    while(string[i] != '\0'){
        if(string[i] > 'c' && string[i] < 'p'){
            cont++;
        }
        i++;
    }

    return cont;

}



void questao_4(){

    char string[100];
    char resultado[100];
    getchar();

    printf("\nDigite uma sequencia de caracteres: ");
    fgets(string,100,stdin);

    mostrar_letras(string,resultado);

    printf("\nletras entre 'c' e 'p': %s\n", resultado);



}

char mostrar_letras(char string[], char resultado[]){

    int i = 0;
    int j = 0;


    while(string[i] != '\0'){
        if(string[i] > 'c' && string[i] < 'p'){
            resultado[j] = string[i];
            j++;
        }
        i++;
    }

   resultado[j] = '\0';



}





void questao_5(){

    char string[100];
    getchar();

    printf("\nDigite uma sequencia de caracteres: ");
    fgets(string,100,stdin);



    printf("\nA quantidade de caracters maiores que c e menores que p sao: %d \n", contar_stringQ5(string));


}


int contar_stringQ5(char string[]){

    int cont = 0;
    int i = 0;

    while(string[i] != '\0'){
        if(string[i] > 'c' && string[i] < 'p'){ // 99 e 112
            cont++;
        }
        if(string[i] > 'C' && string[i] < 'P' ){ //67 e 80
            cont++;
        }
        i++;
    }

    return cont;
}



void questao_6(){

    char resultado[100];
    char string[100];
    getchar();

    printf("\nDigite uma sequencia de caracteres: ");
    fgets(string,100,stdin);

    mostrar_letrasQ6(string,resultado);

    printf("\nletras entre 'c' e 'p': %s\n",resultado);





}

char mostrar_letrasQ6(char string[], char resultado[]){



    int i = 0;
    int j = 0;


    while(string[i] != '\0'){
        if(string[i] > 'c' && string[i] < 'p'){ // 99 e 112
            resultado[j] = string[i];
        j++;
        }
        if(string[i] > 'C' && string[i] < 'P' ){ //67 e 80
            resultado[j] = string[i];
            j++;
    }
    i++;
}
    resultado[j] = '\0';



}



void questao_7(){


    char string[100];
    getchar();

    printf("\nDigite uma sequencia de caracteres: ");
    fgets(string,100,stdin);

    printf("\nA quantidade de digitos pares e: %d",cadeia_pares(string));


}


int cadeia_pares(char string[]){

    int i = 0;
    int cont = 0;


    while(string[i] != '\0' && string[i] != '\n'){// ignora o '\n' do fgets
        if( ((int) string[i]) % 2 == 0){
            cont++;
        }
     i++;
    }

    return cont;

}



void questao_8(){

    char resultado[100];
    char string[100];
    getchar();

    printf("\nDigite uma sequencia de caracteres: ");
    fgets(string,100,stdin);

    alfanumericos(string,resultado);
    printf("\nOs nao alfanumericos sao: %s",resultado);


}


void alfanumericos(char string[],char resultado[]){

    int i = 0;
    int j = 0;

    while(string[i] != '\0' && string[i] != '\n'){
        if(string[i] >= '0' && string[i] <= '9'){

        }else if((string[i] >= 'A' && string[i] <= 'Z') || (string[i] >= 'a' && string[i] <= 'z') ){

        }else{
            resultado[j] = string[i];
            j++;
        }
    i++;

    }

    resultado[j] = '\0';

}



void questao_9() {

    char resultado[100];
    char string[100];
    getchar();
    int numeros[100];

    printf("\nDigite uma sequencia de caracteres: ");
    fgets(string,100,stdin);

    alfanumericos9(string,resultado,numeros);
    printf("\nOs alfanumericos letras sao: %s",resultado);
    printf("\nOs alfanumericos numeros sao: %d",numeros);

}


void alfanumericos9(char string[],char resultado[],int *numeros){

    int i = 0;
    int j = 0;
    int z = 0;

    while(string[i] != '\0' && string[i] != '\n'){

        if(string[i] >= '0' && string[i] <= '9'){
            numeros[j] = string[i];
            z++;
        }else if((string[i] >= 'A' && string[i] <= 'Z') || (string[i] >= 'a' && string[i] <= 'z') ){
            resultado[j] = string[i];
            j++;
        }
    i++;

    }

    resultado[j] = '\0';

}



void questao_10(){

    char caracters[100];
    getchar();

    printf("\nDigite uma quantidade de caracteres: ");
    fgets(caracters, 100, stdin);

    contar_alfanumericos(caracters);



}

void contar_alfanumericos(char string[]) {

    int i = 0, cont = 0, total = 0;
    int palavras[100];
    int z = 0;

    while (string[i] != '\0') {

        if ((string[i] >= '0' && string[i] <= '9') ||
            (string[i] >= 'A' && string[i] <= 'Z') ||
            (string[i] >= 'a' && string[i] <= 'z')) {
            cont++;
        } else if (cont > 0) {
            palavras[z++] = cont;
            total += cont;
            cont = 0;
        }
        i++;
    }


    if (cont > 0) {
        palavras[z++] = cont;
        total += cont;
    }


    printf("\nQuantidade de símbolos alfanuméricos em cada palavra:");
    for (int j = 0; j < z; j++) {
        printf("\nPalavra %d: %d", j + 1, palavras[j]);
    }

    printf("\nTotal acumulado: %d\n", total);
}





