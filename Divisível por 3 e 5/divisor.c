#include <stdio.h>
#include <locale.h>

int main () {

int n1, n2, n3;


printf("");
scanf("%d %d %d", &n1,&n2,&n3);


if (n1 % 3  == 00 && n1 % 5  == 00){
  printf("Divisivel por ambos\n");
}

if (n1 % 3  == 00 && n1 % 5  != 00){
  printf("Divisivel por 3\n");
}


if (n1 % 3  != 00 && n1 % 5  == 00){
  printf("Divisivel por 5\n");
}
if (n1 % 3  != 00 && n1 % 5  != 00 ){
    printf("Nao e divisivel por 3 nem por 5\n");

}




if (n2 % 3  == 00 && n2 % 5  == 00){
  printf("Divisivel por ambos\n");
}

if (n2 % 3  == 00 && n2 % 5  != 00){
  printf("Divisivel por 3\n");
}


if (n2 % 3  != 00 && n2 % 5  == 00){
  printf("Divisivel por 5\n");
}

if (n2 % 3  != 00 && n2 % 5  != 00 ){
    printf("Nao e divisivel por 3 nem por 5\n");

}





if (n3 % 3  == 00 && n3 % 5  == 00){
  printf("Divisivel por ambos\n");
}

if (n3 % 3  == 00 && n3 % 5  != 00){
  printf("Divisivel por 3\n");
}


if (n3 % 3  != 00 && n3 % 5  == 00){
  printf("Divisivel por 5\n");
}

if (n3 % 3  != 00 && n3 % 5  != 00 ){
    printf("Nao e divisivel por 3 nem por 5\n");

}



}
