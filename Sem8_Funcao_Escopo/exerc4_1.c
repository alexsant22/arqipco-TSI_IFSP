/*
4.1. Escreva um programa que implemente uma função para calcular o fatorial de um número
utilizando repetição. A função main() deve conter outras funções para a leitura e impressão do
resultado.
*/

#include <stdio.h>

// Função para ler o número pedido
int lerNumero()
{
    int valor;

    printf("\nDigite um valor inteiro para calcular o fatorial: ");
    scanf("%d", &valor);

    return valor;
}

// Função de cálculo
// O tipo "long long" é um tipo de variavél parecido com o inteiro porém maior
long long calcularFatorial(int n)
{
    long long resultado = 1; // Começamos com 1 pois é o elemento neutro da multiplicação

    // O laço 'for' começa em 1 e vai multiplicando até chegar no número 'n'
    for (int i = 1; i <= n; i++)
    {
        resultado = resultado * i; // O resultado atual é multiplicado pelo próximo número da sequência
    }

    return resultado; // Devolve o valor final calculado para quem chamou a função
}

// Função de exibir resultado
void imprimirResultado(long long res)
{
    printf("\nO resultado da fatorial foi: %lld", res); // O termo "%lld" serve para o tipo "long long"
}

int main()
{
    int numero;          // Variável para guardar o número informado pelo usuário
    long long resultado; // Variável para guardar o resultado da função "calcularFatorial(numero)"

    numero = lerNumero(); // Salvando o número que o usuário informou

    resultado = calcularFatorial(numero); // Calculando a fatorial de acordo com o número e guardando a variável resultado

    imprimirResultado(resultado); // Exibindo resultado de acordo com o resultado

    return 0;
}