#include<stdio.h>

int main () {

float valor1,valor2,valor3;

printf ("");
scanf("%d", &valor1);

printf ("");
scanf("%d", &valor2);

printf ("");
scanf("%d", &valor3);

if (valor1 + valor2 > valor3 && valor1 + valor3 > valor2 && valor2 + valor3 > valor1){


if (valor1 == valor2 && valor2 == valor3){

printf ("Os segmentos formam um triângulo equilatero\n");

}

if (valor1 == valor2 || valor2 == valor3 || valor1 == valor3){
printf ("os segmentos formam um triangulo isosceles\n");

}
if (valor1 != valor2 && valor2 != valor3 && valor1 != valor3) {
printf ("os segmentos formam um triangulo escaleno\n");
}


}

else {

printf("Triangulo invalido");
}

}







