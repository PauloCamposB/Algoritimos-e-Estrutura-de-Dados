#include <stdio.h>

int main()
{
    int M, fa, fb;
    printf("");
    scanf("%d", &M);

    printf("");
    scanf("%d", &fa);

    printf("");
    scanf("%d", &fb);

    int C = M - fa - fb;

    int filhovelho = fa;
    if (fb > filhovelho)
    {
        filhovelho = fb;
    }
    if (C > filhovelho)
    {
        filhovelho = C;
    }

    printf("%d\n", filhovelho);

}
