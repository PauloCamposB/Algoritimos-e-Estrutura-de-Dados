#include<stdio.h>

int main (){

    int n,m;


    scanf("%d %d",&n,&m);

    int a[n];
    int b[m];

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(int i=0;i<m;i++){
        scanf("%d",&b[i]);
    }

    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    for(int i=0;i<m;i++){
        printf("%d ",b[i]);
    }
    printf("\n");

    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    for(int i=0;i<m;i++){
        printf("%d ",b[i]);
    }

}
