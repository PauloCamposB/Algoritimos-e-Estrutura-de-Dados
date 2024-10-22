#include<stdio.h>

int main() {

int di, hi, mi, si;
int df, hf, mf, sf;


    printf("Dia de inicio: ");
    scanf("%d", &di);
    printf("Hora, minuto e segundo de inicio (hh mm ss): ");
    scanf("%d %d %d", &hi, &mi, &si);

    printf("Dia de inicio: ");
    scanf("%d", &df);
    printf("Hora, minuto e segundo de inicio (hh mm ss): ");
    scanf("%d %d %d", &hf, &mf, &sf);


    int inicio_segundos = (di * 24 *60 *60)+(hi* 24 *60 *60)+ (mi*60) + si;

    int segundo_final = (df * 24 *60 *60)+(hf* 24 *60 *60)+ (mf*60) + sf;

    int duracao = segundo_final - inicio_segundos;

    int dias = duracao / (24 * 60 * 60);
    duracao %= (24 * 60 * 60);

    int horas = duracao / (24 * 60 * 60);
    duracao %= ( 60 * 60);

    int minutos = duracao / 60;
    int segundos = duracao % 60;

    printf("%d dia(s)\n", dias);
    printf("%d hora(s)\n", horas);
    printf("%d minuto(s)\n", minutos);
    printf("%d segundo(s)\n", segundos);










}
