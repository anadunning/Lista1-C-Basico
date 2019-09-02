#include <stdio.h>

// Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos.

void secToHourMinSec(int T);

int main(){

    int time;

    printf("Informe o valor do tempo total em segundos: ");
    scanf("%d", &time);

    secToHourMinSec(time);

    return 0;
}

void secToHourMinSec(int T){

    int th, tm, ts;

    // Calcula o tempo total de segundos em horas:
    th = T / 3600;

    // O tempo total agora eh o resto sem as horas
    T = T % 3600;

    // Calcula o tempo restante em minutos:
    tm = T / 60;

    // O tempo total agora eh o resto sem as horas e sem os minutos
    T = T % 60;

    // O tempo restante eh somente o que sobrou dos segundos
    ts = T;

    printf("\n%d horas\n", th);
    printf("%d minutos\n", tm);
    printf("%d segundos\n", ts);
    printf("\n%d : %d : %d\n", th, tm, ts);
}
