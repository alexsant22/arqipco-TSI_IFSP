/*
7.4. Escreva um programa que leia um valor (1 ou 0) indicando se o dispositivo está conectado. Se não
estiver conectado, exiba: "Reconectando...".
*/

#include <stdio.h>
int main()
{
    int valor;

    printf("Digite um valor (1 ou 0): ");
    scanf("%d", &valor);

    if (valor == 1)
    {
        printf("Conectado ;)");
    }
    else
    {
        printf("Reconectando...");
    }

    return 0;
}