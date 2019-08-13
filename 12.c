#include <stdio.h>

// Leia uma distância em milhas e apresente-a em quilômetros.

float MilesToKm(float milhas);

int main(){

    float miles, KM;

    printf("Informe a distancia em milhas: ");
    scanf("%f", &miles);

    KM = MilesToKm(miles);

    printf("\nDistancia de %.2f milhas corresponde a %.2f kilometros.\n", miles, KM);

    return 0;
}

float MilesToKm(float milhas){

    float km;

    km = 1.61 * milhas;

    return km;
}
