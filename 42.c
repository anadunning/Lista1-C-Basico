#include <stdio.h>

// Receba o sal�rio-base de um funcion�rio.
// Calcule e imprima o sal�rio a receber,
// sabendo se que esse funcion�rio tem uma
// gratifica��o de 5% sobre o sal�rio-base.
// Al�m disso, ele paga 7% de imposto sobre o sal�rio-base.

float calcSalary(float salary);

int main(){

    float sal, novoSal;

    printf("Informe o salario-base: ");
    scanf("%f", &sal);

    novoSal = calcSalary(sal);

    printf("Salario a receber: %.2f\n", novoSal);

    return 0;
}

float calcSalary(float salary){

    float newSal;
    const float grat = 0.05;
    const float tax = 0.07;

    newSal = salary + (salary * grat) - (salary * tax);

    return newSal;
}
