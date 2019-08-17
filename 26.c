#include <stdio.h>

// Leia um valor de área em metros quadrados e apresente-o em hectares.

float m2ToHectars(float M);

int main(){

    float m2, hectars;

    printf("Informe a area em m2: ");
    scanf("%f", &m2);

    hectars = m2ToHectars(m2);

    printf("O valor de uma area de %.2f m2 corresponde a %.2f hectares.\n", m2, hectars);

    return 0;
}

float m2ToHectars(float M){

    float H;

    H = M * 0.0001;

    return H;
}
