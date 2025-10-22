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
    void extra_1();
    void extra_2();



    int fun_recur01(int, int);
    int fun_recur02(int, int);
    int fun_recur03(int, int);
    int fun_recur04(int, int);
    int fun_recur05(int, int, int, int);
    int fun_recur06(int, int, float);
    char fun_recur07(char[],int);
    int fun_recur08(char [], int);
    int fun_recur09(char [], int);
    int fun_recur10(int);
    int fun_recur11(int, int, int);
    int fun_recur12(int, int);




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

    printf("\nDigite um numero inteiro: ");
    scanf("%d",&n);

    fun_recur01(n,3);


}

int fun_recur01(int n, int x){
    if(n > 0){
        printf("%d ",x);
        fun_recur01(n-1, x + 3);
    }


}



void questao_2(){

    int n;

    printf("\nDigite um valor inteiro: ");
    scanf("%d",&n);

    fun_recur02(n,3);



}

int fun_recur02(int n, int x){

    if(n > 0){
        printf("%d ", x*n);
        fun_recur02(n-1,x);

    }
}



void questao_3(){

    int n;

    printf("\nDigite um valor inteiro: ");
    scanf("%d",&n);

    if (n >= 1) {
        printf("1/1 ");
    if(n > 1){
            fun_recur03(n,3);
        }
    }

}

int fun_recur03(int n, int x){
    if(n > 1){
        printf("1/%d ",x);
        fun_recur03(n-1,x+3);
    }
}


void questao_4(){

    int n;

    printf("\nDigite um valor inteiro: ");
    scanf("%d",&n);

    if (n >= 1) {
        printf("1/1 ");
    if(n > 1){
            fun_recur04(n,3);
        }
    }
}

int fun_recur04(int n, int x){

    if(n > 1){
        printf("1/%d ",x*n);
        fun_recur04(n-1,x);
    }
}



void questao_5() {
    int n;
    printf("\nDigite um valor inteiro: ");
    scanf("%d", &n);

    printf("Sequencia: ");
    fun_recur05(n, 3, 1, 0);
}

int fun_recur05(int n, int x, int j, int soma) {
    if (n < 1) {
        //printf("\nSoma total: %d\n", soma + x);
        return soma + x;
    }

    printf("%d ", x);
    int novo_x = x + j;
    return fun_recur05(n - 1, novo_x, j + 2, soma + x);
}


void questao_6(){

    int n;

    printf("\nDigite um numero: ");
    scanf("%d",&n);

    printf("\nSequencia: ");

    fun_recur06(n, 3, 0);



}

int fun_recur06(int n, int x, float soma){

    if (n == 0) {
        return soma;
    }
    printf("1/%d ",x);

    return fun_recur06(n - 1, x + 6, soma + 1/x);

}



void questao_7(){

    char palavra[100];
    getchar();

    printf("\nDigite uma palavra: ");
    fgets(palavra,100,stdin);




    int tamanho = strlen(palavra);
    int i = tamanho - 1 ;

    fun_recur07(palavra,i);


}

char fun_recur07(char palavra[],int i){

    if(i < 0){
        return 0;
    }
    printf("\n %c",palavra[i]);
    fun_recur07(palavra, i-1);


}



void questao_8(){

    char palavra[100];
    getchar();

    printf("\nDigite uma palavra: ");
    fgets(palavra,100,stdin);
    palavra[strcspn(palavra, "\n")] = '\0';

    int resposta = fun_recur08(palavra,0);
    printf("\nExistem %d caracteres pares",resposta);

}

int fun_recur08(char palavra[], int i){

    if (palavra[i] == '\0') {
        return 0;
    }

    int cont = 0;

    if(palavra[i] != '\0'){
        if(palavra[i] % 2 == 0){
            cont = 1;
        }
        return cont + fun_recur08(palavra,i+1);
    }

}


void questao_9(){

    char palavra[100];
    getchar();

    printf("\nDigite uma palavra: ");
    fgets(palavra,100,stdin);

    int x = fun_recur09(palavra,0);

    printf("\n%d",x);

}

int fun_recur09(char palavra[], int i ){

    if(palavra[i] == '\0'){
        return 0;
    }

    int cont = 0;
    if(palavra[i] != '\0'){
        if(palavra[i] > 'C' && palavra[i] < 'P'){
            cont = 1;
        }
        return cont + fun_recur09(palavra, i+1);
    }



}



void questao_10(){

    int n;
    int i = 0;
    int j = 0;

    printf("\nDigite um valor inteiro: ");
    scanf("%d",&n);

  while( j <= n) {
    if(fun_recur10(i) % 2 == 0){
        printf("%d ", fun_recur10(i));
        j++;
        }
    i++;
    }
}

int fun_recur10(int i){

    if (i == 0) return 0;
    if (i == 1) return 1;

     return fun_recur10(i - 1) + fun_recur10(i - 2);
}


void extra_1(){

    int n;
    int x;

    printf("\nDigite o valor de X: ");
    scanf("%d",&x);

    printf("\nDigite a quantidade de vezes: ");
    scanf("%d",&n);

    int resultado = 1 + fun_recur11(x, n, 1);

    printf("\nResultado: %d\n", resultado);


}


int fun_recur11(int x, int n, int i){

        if (n <= 0) {
        return 0;
    }

    int expoente = 2*i + 1;
    int termo = pow(x, expoente);



    int resultado_recursivo = fun_recur11(x, n-1, i+1);
    int soma_parcial = termo + resultado_recursivo;



    return soma_parcial;
}




float fatorial(int n) {
    return (n <= 1) ? 1.0 : n * fatorial(n - 1);
}


float calcular_serie(int n, int termo) {
    if (termo > n) return 0;

    int numerador = 2 * termo + 1;
    float potencia = 1 << termo;
    float denominador = fatorial(potencia);
    float valor_termo = numerador / denominador;

    printf("termo %d: %d/%.1f! = %.15f\n",termo, numerador, potencia, valor_termo); // coloquei para mostrar as 15 casas decimais pq sao muito 0 ate chegar no numero desejado

    return valor_termo + calcular_serie(n, termo + 1);
}

void extra_2() {
    int n;
    printf("\nDigite um numero n: ");
    scanf("%d", &n);


    float resultado = 1.0 + calcular_serie(n, 1);
    printf("\nResultado final com %d termos: %.3lf\n", n, resultado);
}


