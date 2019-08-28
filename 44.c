#include <stdio.h>

// Receba a altura do degrau de uma escada e a altura
// que o usuario deseja alcancar subindo a escada.
// Calcule e mostre quantos degraus o usuario devera subir
// para atingir seu objetivo.

int calcSteps(int stepH, int height);

int main(){

    int alturaDeg, altura, numDeg;

    printf("Informe a altura do degrau da escada em cm: ");
    scanf("%d", &alturaDeg);

    printf("Informe a altura que se deseja alcancar em cm: \n");
    printf("1 m = 100 cm\n");
    scanf("%d", &altura);

    numDeg = calcSteps(alturaDeg, altura);

    printf("Numero de degraus: %d\n", numDeg);

    return 0;
}

int calcSteps(int stepH, int height){

    int steps;

    steps = height / stepH;

    return steps;
}
