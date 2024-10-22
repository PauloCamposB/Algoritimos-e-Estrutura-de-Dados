#include<stdio.h>

void imprimeBinario(int n) {
    if (n > 1) {
        imprimeBinario(n / 2);
    }
    printf("%d", n % 2);
}


int main() {

    int n;
    scanf("%d",&n);
if (n < 0) {
        printf("Número inválido. Insira um número positivo.\n");
    } else {
        imprimeBinario(n);

    }

}
