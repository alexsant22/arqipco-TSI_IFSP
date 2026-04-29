/*
7.5. Um sistema exige: a) senha válida (1 ou 0); b) biometria válida (1 ou 0). Escreva um programa que
permita acesso apenas se ambos forem verdadeiros.
*/

#include <stdio.h>
int main()
{
    int senha, biometria;

    printf("Digite os valores 1 ou 0 para senha e para biometria validas:\n");
    scanf("%d %d", &senha, &biometria);

    if (senha == 1 && biometria == 1)
    {
        printf("Acesso permitido :)");
    }
    else
    {
        printf("Acesso negado :(");
    }

    return 0;
}