#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));

    char nome_dos_produtos [8][50] = {"geladeira","pia", "fogao", "aspirador", "bancada", "vassoura", "lampada", "lixeira"};

    int preco [8];
    for(int i = 0; i < 8 ; i++){
        preco[i] = rand()%150;
    }

    for(int i = 0; i < 8 ; i++){
        printf("%s custa: %d \n", nome_dos_produtos[i], preco[i]);

    }

    inferior50(preco);
    entre(preco, nome_dos_produtos);
    media(preco);

}




void inferior50(int a[]){
    int inferior = 0;
    for(int i = 0; i < 8; i ++){
        if (a[i] < 50){
                inferior++;

        }
    }
    printf("\n");
    printf("a quantidade de produtos inferiores a 50 sao: %d \n", inferior);
    printf("\n");

}


void entre(int a [], char b[][50]){
    for(int i = 0; i < 8; i ++){
        if (a[i] > 50 && a[i]< 100){
            printf("%s custa %d e esta entre 50 e 100 \n",b[i], a[i]);


        }

    }


}


void media(int a []){
    int resultado = 0;
    int cont = 0;
    for(int i = 0; i < 8; i ++){
        if (a[i] > 100){
            resultado+= a[i];
            cont++;
        }

}
    float media = resultado/cont;
    printf("\n");
    printf("a media de todos os produtos superiores a 100 e: %.2f", media);
    printf("\n");
}
