#include <stdio.h>

// Leia um valor em real e a cotação do dólar. Imprima o valor correspondente em dólares.

float realToDolar(float brl, float rate);

int main(){

    float real, rate, dolar;

    printf("Informe o valor em reais: ");
    scanf("%f", &real);


    printf("Informe a cotacao do dolar: ");
    scanf("%f", &rate);

    dolar = realToDolar(real, rate);

    printf("%.2f reais convertidos para %.4f em dolar.\n", real, dolar);

    return 0;
}

float realToDolar(float brl, float rate){

    float dlr;

    dlr = brl / rate;

    return dlr;
}
