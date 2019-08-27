#include <stdio.h>

// Leia o salário de um funcionário. Calcule e imprima o valor do novo salário, sabendo que ele recebeu um aumento de 25%.

float salaryWithRise(float salary);

int main(){

    float sal, novoSal;

    printf("Informe o salario de um funcionario: ");
    scanf("%f", &sal);

    novoSal = salaryWithRise(sal);

    printf("Novo salario com aumento: %.2f\n", novoSal);

    return 0;
}

float salaryWithRise(float salary){

    const float rise = 0.25;
    float newSal;

    newSal = salary + (salary * rise);

    return newSal;
}
