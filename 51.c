#include <stdio.h>
#include <math.h>

// Escreva um programa que leia as coordenadas x e y de pontos no R2 e calcule sua distancia da origem (0, 0).

float calcDistance(float a, float b);

int main(){

    float x, y, D;

    scanf("%f %f", &x, &y);

    D = calcDistance(x, y);

    printf("Distancia entre %.1f, %.1f e a origem (0, 0): %.2f\n", x, y, D);

    return 0;
}

float calcDistance(float a, float b){

    float d;

    d = sqrt((a * a) + (b * b));

    return d;
}
