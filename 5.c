#include <stdio.h>

// Leia um n�mero real e
// imprima a quinta parte deste n�mero.

void printFifthPart(float a);

int main(){

    float x;

    printf("Informe um numero real: ");
    scanf("%f", &x);

    printFifthPart(x);

    return 0;
}

void printFifthPart(float a){

    printf("\nQuinta parte do numero real: %.2f\n", a/5);


}
