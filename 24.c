#include <stdio.h>

// Leia um valor de área em metros quadrados e apresente-o em acres.

float m2ToAcres(float M);

int main(){

    float m2, acres;

    printf("Informe a area em m2: ");
    scanf("%f", &m2);

    acres = m2ToAcres(m2);

    printf("O valor da area de %.2f m2 corresponde a %.2f acres.\n", m2, acres);

    return 0;
}

float m2ToAcres(float M){

    float A;

    A = M * 0.000247;


    return A;
}
