/*
2.2. Escreva um programa que implemente uma função float calcularQuadrado(float valor)
para calcular o quadrado de um número real.
*/

#include <stdio.h>
// #include <math.h> // Biblioteca matemática

float calcularQuadrado(float valor)
{
    // Calculando
    float resultado = valor * valor;
    // float resultado = pow(valor, 2); // pow(base, expoente)

    return resultado;
}

int main()
{
    float valor;

    // Pedindo valor
    printf("Digite um valor para calcular o seu quadrado:\n");
    scanf("%f", &valor);

    // Chama a primeira função para pedir o valor e fazer o calculo
    float saida = calcularQuadrado(valor); // 'saida' recebe o valor calculado na função 'calcularQuadrado(valor)'

    // Exibindo saida
    printf("\nO quadrado do valor %.2f eh: %.2f", valor, saida);

    // Outra opção de saida direta sem criar variavel
    // printf("O quadrado do valor %.2f eh: %.2f", valor, calcularQuadrado(valor));

    return 0;
}