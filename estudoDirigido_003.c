
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

    char palavra[100];
    int i = 0;

    printf("\nDigite uma palavra de ate 100 caracteres: ");
    scanf("%s",&palavra);
    getchar();

        while(palavra[i] != '\0'){
            if(palavra[i] >= 'A' && palavra[i] <= 'Z'){
                if(palavra[i] > 'K'){
                    printf("%c \t", palavra[i]);
                }
            }


            i++;
        }

}

void questao_2(){

    char palavra[100];
    int i = 0;
    int cont = 0;
    int c;
    while ((c = getchar()) != '\n' && c != EOF); // Limpa o buffer antes de pedir a entrada, experimentei dessa maneira ao inves do scanf

    printf("\nDigite uma palavra de ate 100 caracteres: ");
    fgets(palavra,100,stdin);


        while(palavra[i] != '\0'){
            if(palavra[i] >= 'a' && palavra[i] <= 'z'){
                if(palavra[i] > 'k'){
                    cont++;
                    printf("%c \t", palavra[i]);
                }
            }


            i++;
        }


    printf("\nO numero de letras encontradas minusculas e maiores que k foi: %d",cont);

}

void questao_3(){

    char palavra[100];
    int i = 0;
    int cont = 0;
    int c;

    int tamanho = strlen(palavra);


    while ((c = getchar()) != '\n' && c != EOF);

    printf("\nDigite uma palavra de ate 100 caracteres: ");
    fgets(palavra,100,stdin);

    if (palavra[tamanho - 1] == '\n') {
        palavra[tamanho - 1] = '\0';
        tamanho--;  // Atualiza o tamanho
    }

    i = tamanho - 1;
        while(i >=0){
            if(palavra[i] >= 'a' && palavra[i] <= 'z'){
                if(palavra[i] > 'k'){
                    cont++;
                    printf("%c \t", palavra[i]);
                }
            }


            i--;
        }


    printf("\nO numero de letras encontradas minusculas e maiores que k foi: %d",cont);


}

void questao_4(){

   char palavras[100];


    printf("\nDigite uma cadeia de caracteres: ");
    scanf("%s", palavras);

    int len = strlen(palavras);


    for (int i = len - 1; i >= 0; i--) {

        if ((palavras[i] >= 'A' && palavras[i] <= 'Z') || (palavras[i] >= 'a' && palavras[i] <= 'z')) {
            printf("%c ", palavras[i]);

        }
    }


}





void questao_5(){

    char palavra[100];
    int cont = 0;

    printf("\nDigite uma palavra de ate 100 caracteres: ");
    getchar();
    fgets(palavra, sizeof(palavra), stdin);


    int tamanho = strlen(palavra);


    if (palavra[tamanho - 1] == '\n') {
        palavra[tamanho - 1] = '\0';
        tamanho--;
    }

    printf("Digitos pares encontrados: ");

    for (int i = tamanho - 1; i >= 0; i--) {
        if ((palavra[i] % 2) == 0) {
            cont++;
            printf("%c ", palavra[i]);
        }
    }


    printf("\nFoi encontrado %d caracteres pares\n", cont);


}











void questao_6(){


    char palavra[100];
    int cont = 0;

    printf("\nDigite uma palavra de ate 100 caracteres: ");
    getchar();
    fgets(palavra, sizeof(palavra), stdin);


    int tamanho = strlen(palavra);


    if (palavra[tamanho - 1] == '\n') {
        palavra[tamanho - 1] = '\0';
        tamanho--;
    }

    printf("Digitos pares encontrados: ");


    for (int i = tamanho - 1; i >= 0; i--) {
        if(palavra[i] >= 'A' && palavra[i] <= 'Z'){
            if ((palavra[i] % 2) == 0) {
                cont++;
                printf("%c ", palavra[i]);
            }
        }
        if(palavra[i] >= 'a' && palavra[i] <= 'z'){
            if ((palavra[i] % 2) == 0) {
                cont++;
                printf("%c ", palavra[i]);
            }
        }
    }


    printf("\nFoi encontrado %d caracteres pares\n", cont);



}

void questao_7(){

    int a,b;
    int n;

    printf("\nDigite dois valores: ");
    scanf("%d %d",&a,&b);

    printf("\nDigite a quantidade (n) de valores inteiros a serem testados: ");
    scanf("%d",&n);

    int x[n];
    printf("\nDigite os numeros a serem testados: ");
    for(int i = 0; i < n; i++){
        scanf("%d",&x[i]);
    }


    printf("\nOs numeros que atendem a regra sao: ");
    for(int i = 0; i<n;i++){
        if(x[i] >= a && x[i]<=b){
            if(x[i] % 3 == 0){
                printf("\n%d\t",x[i]);
            }
        }
    }

}

void questao_8(){

    int a,b;
    int n;

    printf("\nDigite dois valores: ");
    scanf("%d %d",&a,&b);

    printf("\nDigite a quantidade (n) de valores inteiros a serem testados: ");
    scanf("%d",&n);

    int x[n];
    printf("\nDigite os numeros a serem testados: ");
    for(int i = 0; i < n; i++){
        scanf("%d",&x[i]);
    }


    printf("\nOs numeros que atendem a regra sao: ");
    for(int i = 0; i<n;i++){
        if(x[i] >= a && x[i]<=b){
            if(x[i] % 4 == 0 && x[i] % 3 != 0){
                printf("\n%d\t",x[i]);
            }
        }
    }



}

void questao_9() {

    float a, b;
    int n;

    printf("\nDigite dois valores (a) sendo menor que (b): ");
    scanf("%f %f", &a, &b);

    if (a > b) {
        printf("\nErro: O primeiro valor (a) deve ser menor que o segundo valor (b)\n");
        return;
    }

    printf("\nDigite a quantidade (n) de valores a serem testados: ");
    scanf("%d", &n);

    float x[n];

    printf("\nDigite os numeros a serem testados: ");
    for (int i = 0; i < n; i++) {
        scanf("%f", &x[i]);
    }

    printf("\nOs numeros que atendem a regra sao:");
    for (int i = 0; i < n; i++) {
        if (x[i] >= a && x[i] <= b) {
            if (((int)x[i] % 2 == 0) && x[i] < 5) {
                printf(" %.2f", x[i]);
            }
        }
    }

}

void questao_10(){

    float a, b;
    int n;

    printf("\nDigite dois valores (a) sendo menor que (b): ");
    scanf("%f %f", &a, &b);

    do {
        printf("\nDigite dois valores reais (a e b), maiores que 0 e menores que 1 (a < b): ");
        scanf("%f %f", &a, &b);
    } while (a <= 0 || b >= 1 || a >= b);


    printf("\nDigite a quantidade (n) de valores a serem testados: ");
    scanf("%d", &n);

    float x[n];

    printf("\nDigite os numeros a serem testados: ");
    for (int i = 0; i < n; i++) {
        scanf("%f", &x[i]);
    }

   printf("\nOs numeros que atendem a regra sao:");
    for (int i = 0; i < n; i++) {
        float fracionaria = x[i] - (int)x[i];
        if (fracionaria > a && fracionaria < b) {
            printf(" %.2f", x[i]);
        }
    }


}


