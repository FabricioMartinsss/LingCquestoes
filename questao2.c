#include <stdio.h>
int main(){
    float horaTotal;
    printf("Escreva as horas: \n");
    scanf("%f",&horaTotal);
    int horas = (int)horaTotal;
    int minutos = (horaTotal - horas)*60;
    int horaMinutos=horas*60;

    int minTotal = minutos + horaMinutos;
    float segunTotal = minTotal*60;
    printf("Voce escreveu %.2f, sendo %d horas e %d minutos\n",horaTotal,horas,minutos);
    printf("%d horas e %d minutos é igualmente %d minutos e também %d segundos\n",horas,minutos,minTotal,segunTotal);
    return 0;
}