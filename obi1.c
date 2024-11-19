#include <stdio.h>

int main() {
    char antigaLetra, novaLetra, palavra[100];



    printf("Digite a letra a ser substituída: ");
    scanf(" %c", &antigaLetra);
    getchar();


    printf("Digite a nova letra: ");
    scanf(" %c", &novaLetra);
    getchar();


    printf("Digite a palavra: ");
    scanf("%s", palavra);
    getchar();

    for(int i = 0; i < 100; i++){
        if (palavra[i] == antigaLetra){
            palavra[i] = novaLetra;

           }
        }



    printf("Palavra alterada: %s\n", palavra);

    return 0;
}

