/*
6.2. Escreva um programa que solicite uma string ao usuário e converta todas as letras minúsculas
para maiúsculas.
Observação: Estude a biblioteca <ctype.h>
*/

#include <stdio.h>
#include <ctype.h> // Biblioteca que fornece muitas funções para classificar e modificar caracteres.

int main()
{
    char string[100]; // Variavél para armazenar uma String (Array de char)

    printf("Digite uma String: ");        // Pedindo a string pro usuário
    fgets(string, sizeof(string), stdin); // Salva o que foi escrito, contando espaços entre o que foi digitado

    // For para percorrer todas as carácteres dentro da string[i] e parando apenas quando tiver o carácter nulo -> \0
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (islower(string[i])) // Verifica se o caracter da string[i] é minúsculo
        {
            string[i] = toupper(string[i]); // Reescreve a carácter modificada para ser maiúscula
        }
    }

    // Exibindo a string com os carácteres maiúsculos
    printf("\nA String digitada foi convertida apenas para letras MAIUSCULAS:");
    printf("\n%s", string);

    return 0;
}