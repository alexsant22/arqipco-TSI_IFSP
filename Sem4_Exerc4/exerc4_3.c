/*
4.3. Um sistema de frete classifica o peso de um produto de acordo com as seguintes regras:
 Produtos com peso menor ou igual a 1 kg são classificados como “Leve”
 Produtos com peso maior que 1 kg e menor ou igual a 5 kg são classificados como “Médio”
 Produtos com peso maior que 5 kg são classificados como “Pesado”
Escreva um programa que leia o peso de um produto e exiba sua classificação.
Importante: implemente a solução sem utilizar operadores lógicos (&&).
*/

#include <stdio.h>
int main()
{
    float peso;

    printf("Digite o valor do produto (em Kg):\n");
    scanf("%f", &peso);

    if (peso <= 1)
    {
        printf("\nLeve");
    }
    else if (peso > 5)
    {
        printf("\nPesado");
    }
    else
    {
        printf("\nMedio");
    }

    return 0;
}
