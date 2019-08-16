#include <stdio.h>

//Leia um valor de comprimento em metros e apresente-o em jardas.

float metresToYards(float M);

int main(){

    float metres, yards;

    printf("Informe o comprimento em metros: ");
    scanf("%f", &metres);

    yards = metresToYards(metres);

    printf("O valor de %.2f metro(s) corresponde a %.2f jarda(s).\n", metres, yards);

    return 0;
}

float metresToYards(float M){

    float J;

    J = M / 0.91;

    return J;
}
