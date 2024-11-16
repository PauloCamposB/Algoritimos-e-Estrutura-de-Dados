#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char letra;
    char texto[1001];
    int total_palavras = 0;
    int palavras_com_letra = 0;
    int contem_letra = 0;

    printf("Digite a letra que deseja: ");
    scanf(" %c", &letra);

    printf("\nDigite o texto que deseja: ");
    getchar();
    fgets(texto, sizeof(texto), stdin);

    texto[strcspn(texto, "\n")] = '\0';


    char *palavra = strtok(texto, " ");
    while (palavra != NULL) {
        total_palavras++;

        for (int i = 0; palavra[i] != '\0'; i++) {
            if (palavra[i] == letra) {
                contem_letra = 1;
                break;
            }
        }

        if (contem_letra) {
            palavras_com_letra++;
        }

        palavra = strtok(NULL, " ");
    }

    float porcentagem = 0;
    if (total_palavras > 0) {
        porcentagem = (float) palavras_com_letra / total_palavras * 100.0;
    }

    printf("A porcentagem de palavras que contêm a letra '%c' é: %.1f%%\n", letra, porcentagem);

    return 0;
}
