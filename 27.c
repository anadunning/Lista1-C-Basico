#include <stdio.h>

// Leia um valor de área em hectares e apresente-o em metros quadrados.

float hectaresToM2(float H);

int main(){

    float hectares, m2;

    printf("Informe o valor da area em hectares: ");
    scanf("%f", &hectares);

    m2 = hectaresToM2(hectares);

    printf("O valor de %.2f hectares corresponde a %.2f m2.\n", hectares, m2);

    return 0;
}

float hectaresToM2(float H){

    float M;

    M = H * 10000;

    return M;
}
