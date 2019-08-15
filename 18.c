#include <stdio.h>

// Leia um valor de volume em metros cúbicos e apresente-o em litros.

float m3ToLitres(float M);

int main(){

    float m3, litres;

    printf("Informe um volume em m3: ");
    scanf("%f", &m3);

    litres = m3ToLitres(m3);

    printf("O valor do volume %.2f metro(s) cubico(s) corresponde a %.2f litro(s).\n", m3, litres);

    return 0;
}

float m3ToLitres(float M){

    float L;

    L = 1000 * M;

    return L;
}
