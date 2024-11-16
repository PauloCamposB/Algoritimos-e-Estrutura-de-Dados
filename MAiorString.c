#include <stdio.h>
#include <string.h>

int main() {
    int numero;
    scanf("%d", &numero);
    getchar();

    char fruta[numero][50];
    int maiorComprimento = 0;
    char maiorFruta[50] = "";
    char lexicograficos[50] = "";

    for (int i = 0; i < numero; i++) {

        fgets(fruta[i], 50, stdin);



        int comprimento = strlen(fruta[i]);
        if (comprimento > maiorComprimento) {
            maiorComprimento = comprimento;
            strcpy(maiorFruta, fruta[i]);
        }
    }


    for (int i = 0; i < numero; i++) {
        if (strcmp(fruta[i], lexicograficos) > 0) {
            strcpy(lexicograficos, fruta[i]);
        }
    }

    printf("%s", maiorFruta);
    printf("%s", lexicograficos);

    return 0;
}
