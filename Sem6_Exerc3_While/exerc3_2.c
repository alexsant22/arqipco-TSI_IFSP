/*
3.2. Escreva um programa que leia números inteiros até que seja digitado zero. Calcule e exiba a soma
dos valores informados.
Utilize do-while
*/

#include <stdio.h>
int main()
{
    int numero;
    int soma = 0;

    do
    {
        printf("Digite um valor inteiro (digite 0 para parar): ");
        scanf("%d", &numero);

        // Fazendo a soma
        soma = soma + numero;
    } while (numero != 0);

    printf("Valor da soma dos numeros informados: %d\n", soma);

    return 0;
}