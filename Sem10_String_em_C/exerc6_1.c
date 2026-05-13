/*
6.1. Escreva um programa que solicite uma string ao usuário e exiba a quantidade de caracteres
digitados.
Observação: Não utilizar strlen
*/

#include <stdio.h>

int main()
{
    char palavra[100]; // Variavél para armazenar as strings com no máx 99 caracteres
    int tamanho = 0;   // Contador de tamanho da palavra

    printf("Digite uma string qualquer: "); // Solicita a entrada do usuário

    // Lê a string do teclado (stdin) de forma segura, respeitando o limite do array
    // e permitindo a leitura de espaços em branco
    fgets(palavra, sizeof(palavra), stdin);

    // Laço de repetição que percorre a string caractere por caractere
    // A condição verifica se o caractere atual NÃO é o nulo ('\0'), que indica o fim da string
    while (palavra[tamanho] != '\0')
    {
        tamanho++; // Incrementa o contador para passar para a próxima posição
    }

    printf("\nO tamanho da string digitada foi: %d", tamanho); // Exibindo resultado

    return 0;
}