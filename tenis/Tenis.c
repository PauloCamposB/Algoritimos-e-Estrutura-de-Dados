
#include <stdio.h>

int main()
{
    int vitoria = 0;
    char resultado;

    for (int i = 0; i < 6; i++)
    {
        scanf(" %c", &resultado);
        if (resultado == 'V')
        {
            vitoria++;
        }
    }

    if (vitoria == 6 || vitoria == 5)
    {
        printf("1\n");
    }
    else if (vitoria == 4 || vitoria == 3)
    {
        printf("2\n");
    }
    else if (vitoria == 2 || vitoria == 1)
    {
        printf("3\n");
    }
    else
    {
        printf("-1\n");
    }

}
