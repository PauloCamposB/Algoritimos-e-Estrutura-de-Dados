#include <stdio.h>


unsigned long long fibonacci(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    unsigned long long fib_0 = 0, fib_1 = 1, fib_n;

    for (int i = 2; i <= n; i++) {
        fib_n = fib_0 + fib_1;
        fib_0 = fib_1;
        fib_1 = fib_n;
    }
    return fib_n;
}

int main() {
    int T, N;

    // Leitura do número de casos de teste
    scanf("%d", &T);

    // Loop para processar cada caso de teste
    for (int i = 0; i < T; i++) {
        scanf("%d", &N);
        printf("Fib(%d) = %llu\n", N, fibonacci(N));
    }

    return 0;
}
