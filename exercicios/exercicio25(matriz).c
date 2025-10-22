#include <stdio.h>

#define PRODUTOS 10
#define ARMAZENS 5

int main() {

    float preco[PRODUTOS] = {10.50, 20.00, 15.75, 5.25, 30.00, 12.40, 8.90, 25.60, 18.30, 22.50};


    int estoque[ARMAZENS][PRODUTOS] = {
        {50, 30, 20, 60, 10, 40, 25, 35, 45, 15},  // Armaz�m 1
        {40, 20, 30, 50, 15, 35, 30, 25, 40, 20},  // Armaz�m 2
        {60, 25, 35, 40, 20, 30, 20, 40, 35, 25},  // Armaz�m 3
        {55, 35, 25, 45, 12, 45, 22, 30, 50, 18},  // Armaz�m 4
        {45, 28, 40, 35, 18, 38, 28, 32, 38, 22}   // Armaz�m 5
    };

    int total_estoque = 0;
    int i, j;

    // C�lculo do estoque total
    for(i = 0; i < ARMAZENS; i++) {
        for(j = 0; j < PRODUTOS; j++) {
            total_estoque += estoque[i][j];
        }
    }

    printf("Quantidade total de produtos estocados em todos os armaz�ns: %d\n\n", total_estoque);

    // Exibi��o da quantidade de cada produto em cada armaz�m
    printf("Quantidade de cada produto em cada armaz�m:\n");
    for(i = 0; i < ARMAZENS; i++) {
        printf("Armaz�m %d:\n", i + 1);
        for(j = 0; j < PRODUTOS; j++) {
            printf("  Produto %d: %d unidades\n", j + 1, estoque[i][j]);
        }
        printf("\n");
    }


    int max_estoque = estoque[0][0];
    int min_estoque = estoque[0][0];
    int produto_max = 0, armazem_max = 0;
    int produto_min = 0, armazem_min = 0;

    for(i = 0; i < ARMAZENS; i++) {
        for(j = 0; j < PRODUTOS; j++) {
            if(estoque[i][j] > max_estoque) {
                max_estoque = estoque[i][j];
                produto_max = j;
                armazem_max = i;
            }
            if(estoque[i][j] < min_estoque) {
                min_estoque = estoque[i][j];
                produto_min = j;
                armazem_min = i;
            }
        }
    }

    printf("Produto com MAIOR estoque em um �nico armaz�m:\n");
    printf("  Produto %d (Pre�o: R$ %.2f) no Armaz�m %d com %d unidades.\n\n",
           produto_max + 1, preco[produto_max], armazem_max + 1, max_estoque);

    printf("Produto com MENOR estoque em um �nico armaz�m:\n");
    printf("  Produto %d (Pre�o: R$ %.2f) no Armaz�m %d com %d unidades.\n\n",
           produto_min + 1, preco[produto_min], armazem_min + 1, min_estoque);

    // C�lculo do custo de cada armaz�m
    float custo_armazem[ARMAZENS] = {0};

    for(i = 0; i < ARMAZENS; i++) {
        for(j = 0; j < PRODUTOS; j++) {
            custo_armazem[i] += estoque[i][j] * preco[j];
        }
    }

    printf("Custo de cada armaz�m:\n");
    for(i = 0; i < ARMAZENS; i++) {
        printf("  Armaz�m %d: R$ %.2f\n", i + 1, custo_armazem[i]);
    }

    return 0;
}
