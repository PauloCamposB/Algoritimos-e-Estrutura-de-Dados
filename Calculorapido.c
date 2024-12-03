#include<stdio.h>
#include<stdlib.h>



int somar_algarismos(int numero);



int main (){

    int a,b,s;
    int cont = 0;


    scanf("%d %d %d", &s,&a,&b);


    for(int i = a; i <= b;i++){
        if(somar_algarismos(i) == s){
            cont++;
    }
}

    printf("\n%d", cont);



}




int somar_algarismos(int numero){
    int soma = 0;
    while(numero > 0){

        soma += numero % 10;
        numero = numero/10;


    }

    return soma;

}
