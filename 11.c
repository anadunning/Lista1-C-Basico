#include <stdio.h>

// Leia uma velocidade em m/s e apresente-a em km/h.

float MsToKmh(float ms);

int main(){

    float Kmh, Ms;

    printf("Informe a velocidade em metros por segundo: ");
    scanf("%f", &Ms);

    Kmh = MsToKmh(Ms);
    printf("\nVelocidade %.2f m/s corresponde a %.2f km/h\n", Ms, Kmh);

    return 0;
}

float MsToKmh(float ms){

    float kmh;
    kmh = ms * 3.6;

    return kmh;
}
