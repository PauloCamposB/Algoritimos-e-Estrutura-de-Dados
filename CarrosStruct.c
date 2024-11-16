#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct carros {
    char marca[50];
    int ano;
    float preco;
} carros;

void cadastrar_carros(int n, carros *carro);

int main() {
    int n;

    scanf("%d", &n);
    getchar();

    carros *carro = (carros *)malloc(n * sizeof(carros));

    if (carro == NULL) {

        return 1;
    }

    cadastrar_carros(n, carro);

    free(carro);
    return 0;
}

void cadastrar_carros(int n, carros *carro) {
    float maximo;

    for (int i = 0; i < n; i++) {

        fgets(carro[i].marca, 50, stdin);
        carro[i].marca[strcspn(carro[i].marca, "\n")] = '\0';


        scanf("%d", &carro[i].ano);
        getchar();


        scanf("%f", &carro[i].preco);
        getchar();
    }


    scanf("%f", &maximo);

    printf("\nCarros com preco menor que %.2f:\n", maximo);

    for (int i = 0; i < n; i++) {
        if (carro[i].preco < maximo) {
            printf("Marca: %s, Ano: %d, Preco: %.2f\n", carro[i].marca, carro[i].ano, carro[i].preco);
        }
    }
}
