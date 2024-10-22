#include<stdio.h>

int main () {

double area, base, altura, resultado;

printf("Digite a base:");
scanf("%lf", &base);

printf("Digite a altura:");
scanf("%lf", &altura);

resultado = (base*altura)/2;

printf("area = %.2lf", resultado);


return 0;


}
