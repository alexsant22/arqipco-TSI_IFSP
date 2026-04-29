/*
4.4. Uma aplicação recebe a temperatura ambiente (em graus Celsius) e realiza a seguinte
classificação:
 Temperaturas menores que 0 são classificadas como “Congelante”
 Temperaturas de 0 até 20 (inclusive) são classificadas como “Frio”
 Temperaturas de 21 até 28 (inclusive) são classificadas como “Agradável”
 Temperaturas maiores que 29 são classificadas como “Quente”
Escreva um programa que leia a temperatura e exiba sua classificação. Implemente duas versões:
 uma utilizando operadores lógicos (&&)
 outra sem a utilização de operadores lógicos
*/

#include <stdio.h>
int main()
{
    float temperatura;

    printf("Digite o valor da temperatura (em graus Celsius):\n");
    scanf("%f", &temperatura);

    if (temperatura < 0)
    {
        printf("\nCongelante");
    }
    else if (temperatura <= 20)
    {
        printf("\nFrio");
    }
    else if (temperatura > 28)
    {
        printf("\nQuente");
    }
    else
    {
        printf("\nAgradavel");
    }

    return 0;
}