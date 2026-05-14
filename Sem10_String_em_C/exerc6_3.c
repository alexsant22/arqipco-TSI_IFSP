/*
6.3. Escreva um programa que receba uma string e informe a quantidade de vogais e a quantidade de
consoantes.
*/

#include <stdio.h>  // Biblioteca padrão de entrada e saída.
#include <ctype.h>  // Biblioteca para classificar caracteres.
#include <string.h> // Biblioteca para manipulação de strings.

int main()
{
    char string[100];  // Variável para armazenar a string (Array de char com capacidade para até 99 letras + nulo).
    int vogal = 0;     // Contador para armazenar a quantidade total de vogais.
    int consoante = 0; // Contador para armazenar a quantidade total de consoantes.

    printf("Digite uma String: ");        // Pedindo a string para o usuário.
    fgets(string, sizeof(string), stdin); // Lê a entrada de forma segura, guardando também os espaços digitados.
    string[strcspn(string, "\n")] = '\0'; // Procura o 'Enter' (\n) capturado pelo fgets e o substitui pelo caractere nulo (\0).

    // Laço for para percorrer todos os caracteres da string, parando apenas ao encontrar o caractere nulo ('\0').
    for (int i = 0; string[i] != '\0'; i++)
    {
        // O isalpha atua como um filtro: garante que só vamos processar letras reais do alfabeto (ignora espaços, números e pontuações).
        if (isalpha(string[i]))
        {
            // O tolower converte a letra para minúscula temporariamente apenas para a comparação, facilitando o teste das 5 vogais.
            if ((tolower(string[i]) == 'a') || (tolower(string[i]) == 'e') || (tolower(string[i]) == 'i') || (tolower(string[i]) == 'o') || (tolower(string[i]) == 'u'))
            {
                vogal++; // Se passou no teste acima, soma 1 no contador de vogais.
            }
            else
            {
                consoante++; // Se é uma letra (garantido pelo isalpha) e não é vogal, obrigatoriamente é uma consoante.
            }
        }
    }

    // Exibindo a string final e a contagem.
    printf("\nA palavra \"%s\". Tem:\nVogais: %d.\nConsoantes: %d.", string, vogal, consoante);

    return 0;
}