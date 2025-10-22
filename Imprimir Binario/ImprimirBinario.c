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
        printf("N�mero inv�lido. Insira um n�mero positivo.\n");
    } else {
        imprimeBinario(n);

    }

}
