#include <stdio.h>

// Leia um valor de comprimento em polegadas e apresente-o em centímetros.

float litresToM3(float L);

int main(){

    float litres, m3;

    printf("Informe o volume em litros: ");
    scanf("%f", &litres);

    m3 = litresToM3(litres);

    printf("O valor de %.2f litro(s) corresponde a %.2f em metro(s) cubico(s).\n", litres, m3);

    return 0;
}

float litresToM3(float L){

    float M;

    M = L / 1000;

    return M;
}
