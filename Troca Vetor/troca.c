#include <stdio.h>
#include <math.h>

int main(){

    int n;
    int d = 0;

    scanf("%d",&n);

    int b[n];

    for(int i = 0; i < n;i++){
        scanf("%d",&b[i]);
}

    for(int i = 0; i < n; i++){
        d += b[i] * pow(2, n - 1 - i);
    }



    printf("%d", d);




    return 0;
}
