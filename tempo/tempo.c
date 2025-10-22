#include<stdio.h>

int main() {

int hora, minuto, segundo;

printf("");
scanf("%d",&segundo);

hora = segundo/60/60;
minuto = (segundo/60)-(hora*60);
segundo = segundo - hora * 60 * 60 - minuto * 60;

printf("%.2d:", hora); printf("%.2d:", minuto); printf("%d", segundo);






}
