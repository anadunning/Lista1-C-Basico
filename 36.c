#include <stdio.h>
#define PI 3.141592

// Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro.

float calcVolCilinder(float R, float A);

int main(){

    float raio, alt, vol;

    printf("Informe o raio e a altura do cilindro: ");
    scanf("%f %f", &raio, &alt);

    vol = calcVolCilinder(raio, alt);

    printf("Volume do cilindro: %.2f\n", vol);

    return 0;
}

float calcVolCilinder(float R, float A){

    float V;

    V = PI * R * R * A;

    return V;
}
