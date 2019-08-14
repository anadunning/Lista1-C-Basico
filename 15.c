#include <stdio.h>

float radToDegrees(float R);

int main(){

    float rad, deg;

    printf("Informe um angulo em radianos: ");

    scanf("%f", &rad);

    deg = radToDegrees(rad);

    printf("O angulo %.2f em radianos corresponde a %.2f em graus.\n", rad, deg);

    return 0;
}

float radToDegrees(float R){

    #define PI 3.1415
    float G;

    G = (R * 180) / PI;

    return G;
}
