#include <stdio.h>

// A importância de R$ 780.000,00 será dividida entre três ganhadores
// de um concurso. Sendo que da quantia total:
// O primeiro ganhador receberá 46%.
// O segundo receberá 32%. O terceiro receberá o restante.
// Calcule e imprima a quantia ganha por cada um dos ganhadores.

int main(){

    const double premio = 780000.00;
    double g1 = 0.46;
    double g2 = 0.32;
    double g3;

    printf("Primeiro ganhador: R$ %.2f\n", premio * g1);
    printf("Segundo ganhador: R$ %.2f\n", premio * g2);
    printf("Terceiro ganhador: R$ %.2f\n", premio - ((premio * g1)+(premio * g2)));

    return 0;
}

