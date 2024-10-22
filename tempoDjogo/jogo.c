#include <stdio.h>

int main () {

int hi, hf, duracao;

printf("");
scanf("%d", &hi);


printf("");
scanf("%d", &hf);



if (hi == hf){
   duracao = 24;
}
else if  (hi < hf){
    duracao = hi - hf;
}

else if (hi > hf) {
    duracao = (24 - hi)+ hf;

}


printf ("O JOGO DUROU %d HORA(S)\n", duracao);




}
