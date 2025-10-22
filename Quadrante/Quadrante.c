#include <stdio.h>

int main () {

int x,y;

printf("");
scanf("%d", &x);


printf("");
scanf("%d", &y);


if (x > 0 && y > 0){
    printf("primeiro");
}


if (x > 0 && y < 0){
    printf("quarto");
}

if (x < 0 && y < 0) {
    printf("terceiro");
}

if (x < 0 && y > 0){
    printf("segundo");
}


}
