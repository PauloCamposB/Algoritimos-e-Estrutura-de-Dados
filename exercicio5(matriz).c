#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Meses {
    int vendas_do_mes[12][4];
    int total_do_mes[12];
    int total_da_semana[12][4];
    int total_do_ano;
} meses;

int main() {
    srand(time(NULL));


    char nome[12][20] = {
        "Janeiro", "Fevereiro", "Março", "Abril",
        "Maio", "Junho", "Julho", "Agosto",
        "Setembro", "Outubro", "Novembro", "Dezembro"
    };


    for (int i = 0; i < 12; i++) {
        meses.total_do_mes[i] = 0;


        for (int j = 0; j < 4; j++) {
            meses.vendas_do_mes[i][j] = rand() % 30;
            meses.total_da_semana[i][j] = meses.vendas_do_mes[i][j];
            meses.total_do_mes[i] += meses.vendas_do_mes[i][j];


        }
         meses.total_do_ano += meses.total_do_mes[i];
    }


    for (int i = 0; i < 12; i++) {
        printf("Total vendido no mes de %s: %d", nome[i], meses.total_do_mes[i]);
        printf(" e o total do ano foi: %d\n", meses.total_do_ano);


        for (int j = 0; j < 4; j++) {
            printf("  Semana %d: %d vendas\n", j + 1, meses.total_da_semana[i][j]);
        }

        printf("\n");
    }


}
