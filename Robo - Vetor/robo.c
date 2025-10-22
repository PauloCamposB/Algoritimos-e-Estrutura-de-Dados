#include <stdio.h>


void inicializar_coberto(int coberto[], int N) {
    for (int i = 0; i < N; i++) {
        coberto[i] = 0;
    }
}


int processar_soldas(int soldas[], int coberto[], int N) {
    int pontos_cobertos = 0;
    int contador_soldas = 0;

    for (int i = 0; i < 2 * N; i++) {
        int ponto = soldas[i];


        if (ponto >= 1 && ponto <= N) {
            if (coberto[ponto - 1] == 0) {
                coberto[ponto - 1] = 1;
                pontos_cobertos++;
            }
        }

        contador_soldas++;


        if (pontos_cobertos == N) {
            return contador_soldas;
        }
    }


    return 0;
}

int main() {
    int N;
    scanf("%d", &N);

    int soldas[2 * N];
    for (int i = 0; i < 2 * N; i++) {
        scanf("%d", &soldas[i]);
    }

    int coberto[N];
    inicializar_coberto(coberto, N);


    int resultado = processar_soldas(soldas, coberto, N);

    printf("%d\n", resultado);

    return 0;
}
