#include <stdio.h>

// Leia uma velocidade em km/h e apresente-a em m/s.

float KmhToMs(float kmh);


int main(){

    float KMH, MS;

    printf("Informe a velocidade em Km/h: ");
    scanf("%f", &KMH);

    MS = KmhToMs(KMH);
    printf("\nA velocidade %.2f em kilometros por hora,\ncorresponde a %.2f em metros por segundo.\n", KMH, MS);

    return 0;
}

float KmhToMs(float kmh){

    float ms;

    ms = kmh/3.6;

    return ms;
}


