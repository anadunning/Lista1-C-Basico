#include <stdio.h>

// Receba o salário-base de um funcionário.
// Calcule e imprima o salário a receber,
// sabendo se que esse funcionário tem uma
// gratificação de 5% sobre o salário-base.
// Além disso, ele paga 7% de imposto sobre o salário-base.

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
