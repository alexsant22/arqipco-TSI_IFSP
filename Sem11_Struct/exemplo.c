#include <stdio.h>
#include <string.h>

struct Estudante
{
    char nome[50];
    float media;
};

int main()
{
    struct Estudante aluno;

    strcpy(aluno.nome, "Alexandre Santos");

    aluno.media = 8.5;

    printf("Nome: %s\n", aluno.nome);
    printf("Media: %.2f\n", aluno.media);

    return 0;
}