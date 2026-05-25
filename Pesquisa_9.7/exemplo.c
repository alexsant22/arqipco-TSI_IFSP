#include <stdio.h>

struct Aluno
{
    char nome[50];
    int idade;
    float nota;
};

int main()
{
    struct Aluno aluno1;

    aluno1.idade = 20;
    aluno1.nota = 8.5;

    printf("Idade: %d\n", aluno1.idade);
    printf("Nota: %.1f\n", aluno1.nota);

    return 0;
}

void mostrarAluno(struct Aluno a)
{
    printf("%d", a.idade);
}