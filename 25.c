#include <stdio.h>

// Leia um valor de área em acres e apresente-o em metros quadrados.

float acresToM2(float A);

int main(){

    float acres, metres;

    printf("Informe a area em acres: ");
    scanf("%f", &acres);

    metres = acresToM2(acres);

    printf("O valor de %.2f em acres corresponde a %.2f metros.\n", acres, metres);

    return 0;
}

float acresToM2(float A){

    float M;

    M = A * 4048.58;

    return M;
}
