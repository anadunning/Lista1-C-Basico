#include <stdio.h>

float degToRad(float G);

int main(){

    float deg, rad;

    printf("Informe o valor do angulo em graus: ");

    scanf("%f", &deg);

    rad = degToRad(deg);

    printf("O angulo %f em graus corresponde a %f em radianos.\n", deg, rad);

    return 0;
}

float degToRad(float G){

    #define PI 3.1415
    float R;

    R = (G * (PI / 180));

    return R;
}
