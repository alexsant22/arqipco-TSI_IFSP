/*
9.2. Escreva um programa que utilize funções para manipular uma struct chamada “Livro”, contendo
os campos título, autor e data de publicação. A data deve ser representada por uma struct
específica contendo dia, mês e ano. Implemente uma função para cadastrar o livro e outra para
exibir os dados armazenados.
*/

#include <stdio.h>
#include <string.h>

// Estruturas
typedef struct
{
    int dia;
    int mes;
    int ano;
} Data;

typedef struct
{
    char titulo[50];
    char autor[50];
    Data data;
} Livro;

int main()
{
    return 0;
}