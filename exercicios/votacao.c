#include<stdio.h>



int main () {


    int voto = 0;
    int total = 0, total1 = 0, total2 = 0, total3 = 0, total4 = 0, totalvn = 0, totalb = 0;
    double porcentagem = 0.0;

   do{
    printf("escolha seu voto:\n");
    printf("1 - Candidato 1 \n");
    printf("2 - Candidato 2 \n");
    printf("3 - Candidato 3 \n");
    printf("4 - Candidato 4 \n");
    printf("5 - voto nulo \n");
    printf("6 - voto em branco \n");
    scanf("%d", &voto);

    system("cls");



    switch (voto){

        case 1:
                total1++;
                total++;

                break;

            case 2:
                total2++;
                total++;

                break;

            case 3:
                total3++;
                total++;

                break;

            case 4:
                total4++;
                total++;

                break;

            case 5:
                totalvn++;
                total++;

                break;

            case 6:
                totalb++;
                total++;

                break;

            case 0:
                default:
                printf("Voto invalido!\n");
                break;
    }

}while(voto != 0);




    if (total > 0){
    porcentagem = (totalb/ (double) total)*100;
    }








    printf("Candidato 1: %d voto(s) \n", total1);
    printf("Candidato 2: %d voto(s) \n", total2);
    printf("Candidato 3: %d voto(s) \n", total3);
    printf("Candidato 4: %d voto(s) \n", total4);
    printf("Votos nulos: %d \n", totalvn);
    printf("Porcentagem de votos em branco: %.2f%%", porcentagem);








}
