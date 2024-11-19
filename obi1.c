// Torneio de tênis, questão da obi (Olimpíada Brasileira de Informática).


#include <stdio.h>
#include<stdlib.h>

int main() {
    char resultado[6];
    int vitorias = 0;


    printf("Digite qual o resutaldo da partida: \n");
   for(int i = 0; i < 6; i++){
        scanf("%c", &resultado[i]);
            getchar();
    if (resultado [i]== 'v' || resultado[i] == 'V'){
        vitorias++;
    }
   }

   if (vitorias >= 5){
    printf("\n 1 \n");
   }
    if (vitorias >= 3 && vitorias < 5){
    printf("\n 2 \n");
   }
    if (vitorias >= 1 && vitorias < 3){
    printf("\n 3 \n");
   }
   if(vitorias == 0){
   printf("\n lamento mas vc nn podera continuar treinando \n");
   }

}

