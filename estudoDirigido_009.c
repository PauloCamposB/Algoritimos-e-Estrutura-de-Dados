#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>


    int questao_1();
    int questao_2();
    int questao_3();
    int questao_4();
    int questao_5();
    int questao_6();
    int questao_7();
    int questao_8();
    int questao_9();
    int questao_10();
    int extra_1();
    int extra_2();


    double readPositiveDoubleMatrix(double matrix[10][10], int linha, int coluna);
    int DoubleMatrix(double matrix[10][10],int linha, int coluna);
    double ler_matrix(double matrix[10][10],int linha, int coluna);
    double recuperar_matrix(double matrix[10][10], int linha, int coluna);
    void diagonal_principal(double matrix[10][10], int linha, int coluna);
    void diagonal_secundaria(double matrix[10][10], int linha, int coluna);
    void TriangleDoubleMatrix(double matrix[10][10], int linha, int coluna);
    void Numeros_acima(double matrix[10][10], int linha, int coluna);
    void abaixo_secundaria( double matrix[10][10], int linha, int coluna);
    void Numeros_acima_secundaria(double matrix[10][10], int linha, int coluna);
    void Todos_zeros_abaixo(double matrix[10][10], int linha, int coluna);
    bool allZerosUTriangleDoubleMatri(double matrix[10][10], int linha, int coluna);
    void criar_matrix(double matrix[10][10], int linha, int coluna);
    void criar_matrix_inversa(double matrix[10][10], int linha, int coluna);




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


int questao_1(){

    int a,b;

    printf("Digite dois numeros inteiro e positivos (linha(a) e coluna(b): \n");
    scanf("%d %d",&a,&b);

        if (a <= 0 || b <= 0) {
        printf("Dimensoes invalidas! Devem ser positivas\n");
        return 1;
    }

    double matrix[10][10];

    readPositiveDoubleMatrix(matrix, a, b);

    DoubleMatrix(matrix,a,b);
    return 0;


}

double readPositiveDoubleMatrix(double matrix[10][10], int linha, int coluna){
    printf("Digite os numeros para preencher a matriz:\n");
    for(int i = 0; i < linha; i++){
        for(int j = 0; j< coluna; j++){
                do{
                scanf("%lf",&matrix[i][j]);

            }while(matrix[i][j] < 0);

        }
    }

}

int DoubleMatrix(double matrix[10][10],int linha, int coluna){
    printf("\nMatriz:\n");

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            printf("%.2lf ",matrix[i][j]);

           }
           printf("\n");

        }

    }



int questao_2(){
    int a,b;

    printf("Digite dois numeros inteiro e positivos (linha(a) e coluna(b): \n");
    scanf("%d %d",&a,&b);

        if (a <= 0 || b <= 0) {
        printf("Dimensoes invalidas! Devem ser positivas\n");
        return 1;
    }

    double matrix[10][10];

    readPositiveDoubleMatrix(matrix, a, b);

    ler_matrix(matrix, a, b);
    recuperar_matrix(matrix, a, b);

    return 0;

}

double ler_matrix(double matrix[10][10],int linha, int coluna){
    FILE *arquivo = fopen("MATRIX_01.TXT", "w");
    fprintf(arquivo,"matriz:\n");
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            fprintf(arquivo,"%.2lf ",matrix[i][j]);
           }
           fprintf(arquivo,"\n");
        }
        fclose(arquivo);
}

double recuperar_matrix(double matrix[10][10], int linha, int coluna){
    FILE *arquivo = fopen("MATRIX_01.TXT","r");
    printf("\nMatriz:\n");
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            printf("%.2lf ",matrix[i][j]);
        }
        printf("\n");
    }

    fclose(arquivo);

}


int questao_3(){

    int a,b;
    double matrix[10][10];

    printf("Digite dois numeros inteiro e positivos (linha(a) e coluna(b): \n");
    scanf("%d %d",&a,&b);

        if (a <= 0 || b <= 0) {
        printf("Dimensoes invalidas! Devem ser positivas\n");
        return 1;
    }


    readPositiveDoubleMatrix(matrix, a, b);

    if(a == b){
    diagonal_principal( matrix, a, b);
    }else{
        printf("a matriz em questao nao tem diagonal principal, pq nao e quadrada");
    }

    return 0;
}

void diagonal_principal(double matrix[10][10], int linha, int coluna){
    printf("esses numeros sao da diagonal principal:\n");
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            if(i == j){
                printf("%.2lf ",matrix[i][j]);
            }
        }
    }
}



int questao_4(){
    int a,b;
    double matrix[10][10];

    printf("Digite dois numeros inteiro e positivos (linha(a) e coluna(b): \n");
    scanf("%d %d",&a,&b);

        if (a <= 0 || b <= 0) {
        printf("Dimensoes invalidas! Devem ser positivas\n");
        return 1;
    }


    readPositiveDoubleMatrix(matrix, a, b);

    if(a == b){
    diagonal_secundaria( matrix, a, b);
    }else{
        printf("a matriz em questao nao tem diagonal principal, pq nao e quadrada");
    }

    return 0;

}

void diagonal_secundaria(double matrix[10][10], int linha, int coluna){
    printf("esses numeros sao da diagonal secundaria:\n");
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            if(i + j == linha - 1){
                printf("%.2lf ", matrix[i][j]);
            }
        }
    }
    printf("\n");

}




int questao_5(){

    int a,b;
    double matrix[10][10];

    printf("Digite dois numeros inteiro e positivos (linha(a) e coluna(b): \n");
    scanf("%d %d",&a,&b);

        if (a <= 0 || b <= 0) {
        printf("Dimensoes invalidas! Devem ser positivas\n");
        return 1;
    }


    readPositiveDoubleMatrix(matrix, a, b);

    if(a == b){
    TriangleDoubleMatrix( matrix, a, b);
    }else{
        printf("a matriz em questao nao tem diagonal principal, pq nao e quadrada");
    }

    return 0;
}


void TriangleDoubleMatrix(double matrix[10][10], int linha, int coluna){
    printf("Aqui estao os numeros abaixo da diagonal principal:\n");
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            if(i > j){
                printf("%.2lf ", matrix[i][j]);
            }
        }

    }
}


int questao_6(){

    int a,b;
    double matrix[10][10];

    printf("Digite dois numeros inteiro e positivos (linha(a) e coluna(b): \n");
    scanf("%d %d",&a,&b);

        if (a <= 0 || b <= 0) {
        printf("Dimensoes invalidas! Devem ser positivas\n");
        return 1;
    }


    readPositiveDoubleMatrix(matrix, a, b);

    if(a == b){
    Numeros_acima( matrix, a, b);
    }else{
        printf("a matriz em questao nao tem diagonal principal, pq nao e quadrada");
    }

    return 0;



}

void Numeros_acima(double matrix[10][10], int linha, int coluna){
    printf("Aqui estao os numeros acima da diagonal principal:\n");
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            if(i < j){
                printf("%.2lf ", matrix[i][j]);
            }
        }
    }
}





int questao_7(){

    int a,b;
    double matrix[10][10];

    printf("Digite dois numeros inteiro e positivos (linha(a) e coluna(b): \n");
    scanf("%d %d",&a,&b);

        if (a <= 0 || b <= 0) {
        printf("Dimensoes invalidas! Devem ser positivas\n");
        return 1;
    }


    readPositiveDoubleMatrix(matrix, a, b);

    if(a == b){
    abaixo_secundaria( matrix, a, b);
    }else{
        printf("a matriz em questao nao tem diagonal principal, pq nao e quadrada");
    }

    return 0;


}

void abaixo_secundaria( double matrix[10][10], int linha, int coluna){
    printf("Aqui estao os numeros abaixo da diagonal secundaria:\n");
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            if(i + j > linha - 1){
                printf("%.2lf ", matrix[i][j]);
            }
        }

    }






}





int questao_8(){

    int a,b;
    double matrix[10][10];

    printf("Digite dois numeros inteiro e positivos (linha(a) e coluna(b): \n");
    scanf("%d %d",&a,&b);

        if (a <= 0 || b <= 0) {
        printf("Dimensoes invalidas! Devem ser positivas\n");
        return 1;
    }


    readPositiveDoubleMatrix(matrix, a, b);

    if(a == b){
    Numeros_acima_secundaria( matrix, a, b);
    }else{
        printf("a matriz em questao nao tem diagonal principal, pq nao e quadrada");
    }

    return 0;


}

void Numeros_acima_secundaria(double matrix[10][10], int linha, int coluna){

    printf("Aqui estao os numeros acima da diagonal principal:\n");
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            if(i + j < linha - 1){
                printf("%.2lf ", matrix[i][j]);
            }
        }

    }

}



int questao_9(){
    int a,b;
    double matrix[10][10];

    printf("Digite dois numeros inteiro e positivos (linha(a) e coluna(b): \n");
    scanf("%d %d",&a,&b);

        if (a <= 0 || b <= 0) {
        printf("Dimensoes invalidas! Devem ser positivas\n");
        return 1;
    }


    readPositiveDoubleMatrix(matrix, a, b);

    if(a == b){
    Todos_zeros_abaixo( matrix, a, b);
    }else{
        printf("a matriz em questao nao tem diagonal principal, pq nao e quadrada");
    }

    return 0;
}

void Todos_zeros_abaixo(double matrix[10][10], int linha, int coluna){
    printf("Esses sao os 0 (zeros) abaixo da diagonal principal:\n");
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            if(i > j){
                if(matrix[i][j] == 0){
                printf("%.2lf ", matrix[i][j]);
                }
            }
        }
    }
}



int questao_10(){
    int a,b;
    double matrix[10][10];

    printf("Digite dois numeros inteiro e positivos (linha(a) e coluna(b): \n");
    scanf("%d %d",&a,&b);

        if (a <= 0 || b <= 0) {
        printf("Dimensoes invalidas! Devem ser positivas\n");
        return 1;
    }


    readPositiveDoubleMatrix(matrix, a, b);

    if (a == b) {
        bool resp = allZerosUTriangleDoubleMatri(matrix, a, b);

        if (resp){
            printf("Todos os elementos acima da diagonal principal sao zeros.\n");
        } else {
            printf("Existem elementos NAO zero acima da diagonal principal.\n");
        }
    }else{
        printf("A matriz nao e quadrada, portanto nao tem diagonal principal.\n");
    }


    return 0;


}

bool allZerosUTriangleDoubleMatri(double matrix[10][10], int linha, int coluna){
    printf("Aqui estao os nao zeros acima da diagonal principal:\n");
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            if(i < j){
                if(matrix[i][j] != 0){
                    return false;
                }
            }
        }
    }
    return true;
}


int extra_1(){

    int a,b;
    double matrix[10][10];

    printf("Digite dois numeros inteiro e positivos (linha(a) e coluna(b): \n");
    scanf("%d %d",&a,&b);

        if (a <= 0 || b <= 0) {
        printf("Dimensoes invalidas! Devem ser positivas\n");
        return 1;
    }


    criar_matrix(matrix, a, b);



    return 0;


}

void criar_matrix(double matrix[10][10], int linha, int coluna){
    FILE *arquivo = fopen("matrizes.TXT","w");
    if(arquivo == NULL){
        printf("erro ao abrir o arquivo\n");
    }

    fprintf(arquivo,"matriz:\n");
    int z = 0;
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            z = z + 1;
            fprintf(arquivo,"%d ",z);
            printf("%d ",z);
        }
    printf("\n");
    fprintf(arquivo,"\n");
    }

    fclose(arquivo);
    printf("Arquivo salvo com sucesso!!");
}


int extra_2(){

 int a,b;
    double matrix[10][10];

    printf("Digite dois numeros inteiro e positivos (linha(a) e coluna(b): \n");
    scanf("%d %d",&a,&b);

        if (a <= 0 || b <= 0) {
        printf("Dimensoes invalidas! Devem ser positivas\n");
        return 1;
    }


    criar_matrix_inversa(matrix, a, b);

}

void criar_matrix_inversa(double matrix[10][10], int linha, int coluna){
   FILE *arquivo = fopen("matrizes_inversas.TXT","w");
    int z = 1;
     fprintf(arquivo,"Matriz Original:\n");
    for(int i = 0; i < linha; i++) {
        for(int j = 0; j < coluna; j++){
            fprintf(arquivo,"%d\t", z);
            z++; // professor realmente nao consegui achar  uma solução para imprimir do jeito que o exercicio queria
        }
        fprintf(arquivo,"\n");
    }

    fclose(arquivo);

    printf("Matriz salva com sucesso");
}










