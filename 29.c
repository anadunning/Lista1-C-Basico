#include <stdio.h>

// Leia quatro notas, calcule a média aritmética e imprima o resultado.

float average(int n1, int n2, int n3, int n4);

int main(){

    int g1, g2, g3, g4;
    float avg;

    scanf("%d %d %d %d", &g1, &g2, &g3, &g4);

    avg = average(g1, g2, g3, g4);

    printf("Media aritmetica das quatro notas: %.1f\n", avg);

    return 0;
}

float average(int n1, int n2, int n3, int n4){

    float average;

    average = (n1 + n2 + n3 + n4) / 4.0;

    return average;
}
