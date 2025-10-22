#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char lista_dos_nomes[8][50]= {
        "Alice",
        "Bruno",
        "Carlos",
        "Diana",
        "Eduardo",
        "Fernanda",
        "Gabriel",
        "Helena"
    };


    int dvds[8];
    for (int i = 0; i < 8 ; i++){
        dvds[i] = rand() % 35;


    }


    int quantidade[8];
    int resultado;

    for(int i = 0; i < 8; i++){
        if (dvds[i] % 10 > 1){
            resultado = dvds[i] / 10;
            quantidade[i] = resultado;



    }else{
    quantidade[i] = 0;
    }

}
    for(int i = 0; i < 8 ; i++){
        printf("o cliente %s alugou %d dvds e tem direito a %d dvds gratis \n", lista_dos_nomes[i], dvds[i], quantidade[i]);
    }
}
