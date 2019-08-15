#include <stdio.h>

// Leia um ângulo em graus e apresente-o em radianos.

float degToRad(float G);

int main(){

    float deg, rad;

    printf("Informe o valor do angulo em graus: ");

    scanf("%f", &deg);

    rad = degToRad(deg);

    printf("O angulo %.2f em graus corresponde a %.2f em radianos.\n", deg, rad);

    return 0;
}

float degToRad(float G){

    #define PI 3.1415
    float R;

    R = (G * (PI / 180));

    return R;
}
