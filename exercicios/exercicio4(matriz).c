#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    srand(time(NULL));

    float provas[15][5];
    for(int i = 0; i < 15; i++){
        for(int j = 0; j < 5; j++){
            provas[i][j]= rand()%11;
        }
    }

    char nome[15][50] ={ "Ana","Bruno", "Carlos","Diana", "Eduardo", "Fernanda", "Gabriel", "Helena", "Igor", "Julia"
, "Lucas", "Mariana", "Nathalia", "Otavio", "Paula"};





    for (int i = 0; i < 15; i++) {
        printf("Aluno: %s\n", nome[i]);
            printf("Notas: ");
        for (int j = 0; j < 5; j++) {
            printf("%.f ", provas[i][j]);
        }
        printf("\n\n");
    }



    float media_de_cada[15];
    float soma = 0;

    for(int j = 0; j < 15; j++){
        soma = 0;
        for(int i = 0; i < 5; i++){
        soma = soma + provas[j][i];
        media_de_cada[j] = soma/5;
        }
        printf("A media do aluno %d foi: %.2f \n", j+1, media_de_cada[j]);
    }



    soma = 0;

    float media_geral = 0;

    for(int j = 0; j < 15; j++){
            soma = soma + media_de_cada[j];
        }
        media_geral = soma/15;
    printf("\n A media da turma toda foi: %.2f \n", media_geral);


    for(int i = 0; i < 15; i++){
        if(media_de_cada[i]>= media_geral){
            printf("\n o aluno %d foi aprovado(a) \n",i+1);
            }else{
                printf("\n O aluno %d foi reprovado \n", i+1);

    }

   }



}















