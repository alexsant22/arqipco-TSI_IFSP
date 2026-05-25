#include <stdio.h>
#include "operacoes.h"

int main()
{
    int resultado1 = soma(10, 5);
    int resultado2 = subtracao(10, 5);

    printf("Soma: %d\n", resultado1);
    printf("Subtracao: %d\n", resultado2);

    return 0;
}