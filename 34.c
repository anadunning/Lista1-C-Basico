#include <stdio.h>
#define PI 3.141592

// Leia o valor do raio de um circulo e calcule e imprima a area do circulo correspondente.

float circleArea(float R);

int main(){

    float raio, area;

    printf("Informe o raio do circulo: ");
    scanf("%f", &raio);

    area = circleArea(raio);

    printf("Area do circulo: %.2f\n", area);

    return 0;
}

float circleArea(float R){

    float A;

    A = PI * R * R;

    return A;
}
