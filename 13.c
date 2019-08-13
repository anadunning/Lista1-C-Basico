#include <stdio.h>

// Leia uma distância em quilômetros e apresente-a em milhas.

float KilometresToMiles(float km);

int main(){

    float km, miles;

    printf("Informe a distancia em kilometros: ");
    scanf("%f", &km);

    miles = KilometresToMiles(km);

    printf("\nDistancia de %.2f kilometros corresponde a %.2f milhas.\n", km, miles);

    return 0;
}

float KilometresToMiles(float km){

    float milhas;

    milhas = (km / 1.61);

    return milhas;
}
