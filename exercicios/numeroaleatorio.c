#include <stdio.h>

int main () {

double n1, n2, resultado;

int opcao;

printf("\n digite o numero:");
scanf("%lf", &n1);

printf("\n digite outro numero:");
scanf("%lf", &n2);


printf("escolha a opcao");

printf("\n 1)  media entre os numeros digitado");
printf("\n 2)  diferenca do maior pelo menor");
printf("\n 3)  produto entre os numeros digitados");
printf("\n 4)  divisao do primeiro pelo segundo\n");
scanf("%d", &opcao);

    if (opcao == 1) {

    resultado = (n1 +n2)/2;
    printf("\n %.2lf", resultado);}


    if (opcao == 2 && n1 > n2){
    resultado = n1 - n2;
    printf("\n %lf", resultado);
}
    if (opcao == 2 && n2 > n1){
    resultado = n2 - n1;
    printf("\n %lf", resultado);
  }

    if (opcao == 3){
    resultado = n1 * n2;
    printf("%lf", resultado);
  }

    if (opcao == 4 && n1 != 0 && n2 != 0){
    resultado = n1 / n2;
    printf("%lf", resultado);
  }
      if (opcao == 4 && n1 == 0 || n2 == 0){
    resultado = n1 / n2;
    printf("nao se pode dividir por zero");
  }

  }






