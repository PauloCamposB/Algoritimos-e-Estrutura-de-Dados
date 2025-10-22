#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>


int contar_divisores_impares(int num) {
    int count = 0;
    for(int i = 1; i <= num; i++) {
        if(num % i == 0 && i % 2 != 0) {
            count++;
        }
    }
    return count;
}


int contar_divisores_pares(int num) {
    int count = 0;
    for(int i = 1; i <= num; i++) {
        if(num % i == 0 && i % 2 == 0) {
            count++;
        }
    }
    return count;
}


void verificar_divisores(int x[], int n) {
    for(int i = 0; i < n; i++) {
        int pares = contar_divisores_pares(x[i]);
        int impares = contar_divisores_impares(x[i]);

        if(pares > impares) {
            printf("%d tem mais divisores pares (%d) do que impares (%d)\n", x[i], pares, impares);
        } else if(impares > pares) {
            printf("%d tem mais divisores impares (%d) do que pares (%d)\n", x[i], impares, pares);
        } else {
            printf("%d tem a mesma quantidade de divisores pares (%d) e impares (%d)\n", x[i], pares, impares);
        }
    }
}

void questao_1() {
    int n;

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);

    int x[n];
    printf("Digite os %d numeros (um por vez):\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }

    verificar_divisores(x, n);


}


bool descobrir_primo(int num){
    if(num <= 1){
        return false;
    }

    for(int i = 2; i * i <= num; i++){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
}

int verificar_primo(int x[], int n){
    for(int i = 0; i < n; i++){
        if(descobrir_primo){
            printf("%d e primo\n", x[i]);
        }else{
            printf("%d nao e primo\n", x[i]);
        }
    }
}

void questao_2(){

    int n;

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);

    int x[n];
    printf("Digite os %d numeros (um por vez):\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }

    verificar_primo(x, n);
}

bool operador_logico(char c){

    switch(c){
        case '&':
            return true;
        case '|':
            return true;
        case '!':
            return true;

        default: return false;
    }
}

bool operador_aritmetico(char c){
    switch(c){
        case '+':
            return true;
        case '-':
            return true;
        case '*':
            return true;
        case '/':
            return true;
        case '%':
            return true;
        default: return false;
    }

}

bool operador_relacional(char c){
    switch(c){
        case '<':
            return true;
        case '>':
            return true;
        case '=':
            return true;

        default: return false;
    }



}

bool operador_separador(char c){
    switch(c){
        case ' ':
            return true;
        case '.':
            return true;
        case ',':
            return true;
        case ';':
            return true;
        case ':':
            return true;
        case '_':
            return true;

        default: return false;
    }



}

bool operador_letras_maiusculas(char c){
    switch(c){
        case 'A':
            return true;
        case 'B':
            return true;
        case 'C':
            return true;
        case 'D':
            return true;
        case 'E':
            return true;
        case 'F':
            return true;
        case 'G':
            return true;
        case 'H':
            return true;
        case 'I':
            return true;
        case 'J':
            return true;
        case 'K':
            return true;
        case 'L':
            return true;
        case 'M':
            return true;
        case 'N':
            return true;
        case 'O':
            return true;
        case 'P':
            return true;
        case 'Q':
            return true;
        case 'R':
            return true;
        case 'S':
            return true;
        case 'T':
            return true;
        case 'U':
            return true;
        case 'V':
            return true;
        case 'W':
            return true;
        case 'X':
            return true;
        case 'Y':
            return true;
        case 'Z':
             return true;

        default:
            return false;
    }



}

bool operador_letras_minuscula(char c){
    switch(c){
        case 'a':
            return true;
        case 'b':
            return true;
        case 'c':
            return true;
        case 'd':
            return true;
        case 'e':
            return true;
        case 'f':
            return true;
        case 'g':
            return true;
        case 'h':
            return true;
        case 'i':
            return true;
        case 'j':
            return true;
        case 'k':
            return true;
        case 'l':
            return true;
        case 'm':
            return true;
        case 'n':
            return true;
        case 'o':
            return true;
        case 'p':
            return true;
        case 'q':
            return true;
        case 'r':
            return true;
        case 's':
            return true;
        case 't':
            return true;
        case 'u':
            return true;
        case 'v':
            return true;
        case 'w':
            return true;
        case 'x':
            return true;
        case 'y':
            return true;
        case 'z':
            return true;
        default:
            return false;
    }


}


bool operador_digitos(char c){

    switch(c){
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            return true;
        default:
            return false;
    }
}

void classificar_string(char string[]){

    int total_logico = 0;
    int total_aritmetico = 0;
    int total_relacional = 0;
    int total_separador = 0;
    int total_minusculo = 0;
    int total_maiusculo = 0;
    int total_digitos = 0;

    for(int i = 0; string[i] != '\0' && string[i] != '\n'; i++) {
        char c = string[i];
        bool classificou = false;


        if(operador_logico(c)) {
            printf("%c: Operador logico\n", c);
            total_logico++;
            classificou = true;
        }
        else if(operador_aritmetico(c)) {
            printf("%c: Operador aritmetico\n", c);
            total_aritmetico++;
            classificou = true;
        }
        else if(operador_relacional(c)) {
            printf("%c: Operador relacional\n", c);
            total_relacional++;
            classificou = true;
        }
        else if(operador_separador(c)) {
            printf("%c: Separador\n", c);
            total_separador++;
            classificou = true;
        }
        else if(operador_letras_maiusculas(c)){
            printf("%c: letra maiuscula\n", c);
            total_maiusculo++;
            classificou = true;
        }
        else if(operador_letras_minuscula(c)){
            printf("%c: letra minuscula\n", c);
            total_minusculo++;
            classificou = true;
        }
        else if(operador_digitos(c)){
            printf("%c: digito\n",c);
            total_digitos++;
            classificou = true;
        }

        if(!classificou) {
            printf("%c: Outro simbolo\n", c);
        }
    }

}



void questao_3(){


    char string[100];
    getchar();

    printf("Digite uma string: ");
    fgets(string,100,stdin);

    classificar_string(string);


}


void questao_4(){

    char s[100];
    getchar();

    printf("Digite uma string: ");
    fgets(s,100,stdin);

    classificar_string(s);
}


int classificar_numero(int x[],int n){

    float media1 = 0;
    int cont1 = 0;

    float media2 = 0;
    int cont2 = 0;

    float media3 = 0;
    int cont3 = 0;



    for(int i = 0; i < n; i++){
        if(x[i] < -21.75){
            media1 += x[i];
            cont1++;
        }
        else if(x[i]>= -21.75 && x[i] <= 71.25){
            media2 += x[i];
            cont2++;
        }
        else if(x[i] > 71.25){
            media3 += x[i];
            cont3++;
        }
    }
    printf("a media de numeros menores que -21.75 e: %2.f\n",media1/cont1);
    printf("a media de numeros entre -21.75 e 75.25: %2.f\n",media2/cont2);
    printf("a media de numeros maiores que 75.25 e: %2.f\n",media3/cont3);


    float resp1 = media1/cont1;
    float resp2 = media2/cont2;
    float resp3 = media3/cont3;

    float maior_media = resp1;


    if(maior_media < resp2){
        maior_media = resp2;
    }
    if(maior_media < resp3){
        maior_media = resp3;
    }
    if(maior_media < resp1){
        maior_media = resp1;
    }
    printf("a maior media foi a media com o valor de: %2.f\n",maior_media);
}


void questao_5(){

    int n;

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);

    int x[n];
    printf("Digite os %d numeros (um por vez):\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }

    classificar_numero(x, n);

}



bool esta_no_intervalo(int x, int a, int b) {
    return (x > a && x < b);
}


bool eh_valido(int x) {
    return (x % 2 != 0 && x % 3 != 0);
}


void calcular_soma(int a, int b) {
    int x;
    float soma = 0.0f;

    do {
        scanf("%d", &x);
        if (x == -1) break;

        if (esta_no_intervalo(x, a, b) && eh_valido(x) && x != 0) {
            float termo = 1.0f / (x * x * x);
            soma += termo;
        }
    } while (1);

    printf("\nSoma final: %.4f\n", soma);
}

void questao_6() {
    int a, b;
    printf("Digite a e b (intervalo): ");
    scanf("%d %d", &a, &b);

    if(a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    printf("Digite os valores (-1 para terminar):\n");
    calcular_soma(a, b);

}



void questao_7() {
    float a, b, valor;
    int dentro = 0, fora = 0, acima = 0, abaixo = 0;
    int continuar = 1;

    printf("Digite os valores a e b (limites do intervalo): ");
    scanf("%f %f", &a, &b);


    if(a > b) {
        float temp = a;
        a = b;
        b = temp;
    }

    printf("Digite os valores reais (0 para terminar):\n");

    do {
        scanf("%f", &valor);

        if(valor == 0.0f) {
            continuar = 0;
        } else {
            if(esta_no_intervalo(valor, a, b)) {
                dentro++;
            } else {
                fora++;
                if(valor > b) {
                    acima++;
                } else {
                    abaixo++;
                }
            }
        }
    } while(continuar);


    float porcent_acima, porcent_abaixo;

    if (fora > 0) {
        porcent_acima = (float)acima / fora * 100;
        porcent_abaixo = (float)abaixo / fora * 100;
    } else {
        porcent_acima = 0;
        porcent_abaixo = 0;
    }

    printf("Valores dentro de (%.2f, %.2f): %d\n", a, b, dentro);
    printf("Valores fora: %d\n", fora);
    printf("Acima: %d (%.2f%%)\n", acima, porcent_acima);
    printf("Abaixo: %d (%.2f%%)\n", abaixo, porcent_abaixo);
}

void descobrir_ordem(int x, int y, int z){

    int maior = x;
    int menor = z;

    if(x <= y && x <= z && y <= z){
        printf("Esta em ordem crescente\n");
    }
    else if(x >= y && x >= z && y >= z){
        printf("Esta em ordem decrescente\n");
    }else{
        if(maior < y){
            maior = y;
        }else if(maior < z){
            maior = z;
        }else if(maior < x){
            maior = x;
        }
        if(menor > y){
            menor = y;
        }else if(menor < z){
            menor = z;
        }else if(menor < x){
            menor = x;
        }

        printf("Esta em outra ordem\n");
        printf("E o maior numero da sequencia e (%d) e o menor e (%d)\n", maior,menor);
    }


}



void questao_8(){

    int x,y,z;

    printf("Digite os tres numeros que deseja: ");
    scanf("%d %d %d",&x, &y, &z);

    descobrir_ordem(x,y,z);

}



bool sucessor(char x, char y) {
    return (y == x + 1);
}


bool crescente(char x, char y, char z) {
    return (x <= y && y <= z);
}


bool decrescente(char x, char y, char z) {
    return (x >= y && y >= z);
}

void mostrar_resultado(char x, char y, char z, bool crescente, bool decrescente, bool sucessor) { // so pensei assim para mostrar a resposta que nao pode ser na funcao principal
    if (crescente) {
        printf("Ordem crescente: (%c, %c, %c)\n", x, y, z);
    } else if (decrescente) {
        printf("Ordem decrescente: (%c, %c, %c)\n", x, y, z);
    } else if (sucessor) {
        printf("Sao sucessores: (%c, %c, %c)\n", x, y, z);
    } else {
        printf("Esta em outra ordem (%c, %c, %c)\n", x, y, z);
    }
}


void questao_9(){


    char x,y,z;

    printf("Digite os tres numeros que deseja: ");
    scanf(" %c %c %c", &x, &y, &z);

    bool resposta1 = crescente(x, y, z);
    bool resposta2 = decrescente(x, y, z);
    bool resposta3 = sucessor(x, y);

    mostrar_resultado(x, y, z, resposta1, resposta2, resposta3);
}






int verificarOrdemStrings(char *x, char *y, char *z){

    int cmpXY = strcmp(x, y);
    int cmpYZ = strcmp(y, z);

    if (cmpXY <= 0 && cmpYZ <= 0) {
        return 1;
    } else if (cmpXY >= 0 && cmpYZ >= 0) {
        return 2;
    } else {
        return 0;
    }
}


void encontrarMenorMaior(const char *x, const char *y, const char *z, const char **menor, const char **maior) {
    *menor = x;
    *maior = x;

    if (strcmp(y, *menor) < 0) {
        *menor = y;
    }
    if (strcmp(z, *menor) < 0) {
        *menor = z;
    }

    if (strcmp(y, *maior) > 0) {
        *maior = y;
    }
    if (strcmp(z, *maior) > 0) {
        *maior = z;
    }
}

void questao_10(){

    char x[100], y[100], z[100];
    const char *menor, *maior;

    printf("Digite a primeira cadeia de caracteres: ");
    scanf("%s", x);
    printf("Digite a segunda cadeia de caracteres: ");
    scanf("%s", y);
    printf("Digite a terceira cadeia de caracteres: ");
    scanf("%s", z);

    int ordem = verificarOrdemStrings(x, y, z);

    if (ordem == 1) {
        printf("Ordem crescente\n");
    } else if (ordem == 2) {
        printf("Ordem decrescente\n");
    } else {
        encontrarMenorMaior(x, y, z, &menor, &maior);
        printf("Nenhuma ordem especifica\n Menor: %s\n Maior: %s\n", menor, maior);
    }
}




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


    switch(opcao){


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

