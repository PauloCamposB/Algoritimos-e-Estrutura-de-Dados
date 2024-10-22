#include <stdio.h>

int F(int n){
    if(n == 0){
        return 1;
}else{
    return 2*F(n - 1)+3;
}
}

int main(){
    int n;
    scanf("%d", &n);
   int resultado = F(n);

   printf("%d", resultado);
    return 0;
}

