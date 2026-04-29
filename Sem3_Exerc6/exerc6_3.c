/*
6.3. Elabore um programa que leia o tamanho de um arquivo (em MB) e mostre quantos arquivos
desse tamanho caberiam em um armazenamento de 1 GB (considere 1 GB = 1024 MB).
*/

#include <stdio.h>
int main()
{
    float tamanhoArquivo;
    int quantidadeArquivos;

    printf("Digite o tamanho do arquivo (em MB): ");
    scanf("%f", &tamanhoArquivo);

    quantidadeArquivos = 1024 / tamanhoArquivo;

    printf("Em um armazenamento de 1 GB (1024 MB), cabem %d arquivos de %.2f MB.\n", quantidadeArquivos, tamanhoArquivo);

    return 0;
}