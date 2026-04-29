/*
2.7. Elabore um programa que leia a nota de 10 alunos e classifique cada uma conforme:
- A (≥ 9)
- B (≥ 7 e < 9)
- C (≥ 5 e < 7)
- D (< 5)
*/

#include <stdio.h>
int main()
{
    float nota;

    printf("Digite a nota de 10 alunos:\n");

    // Laço para repetir 10x
    for (int contador = 1; contador <= 10; contador++)
    {
        printf("\nDigite a nota do aluno %d: ", contador); // Pedindo a nota de acordo com a contagem
        scanf("%f", &nota);

        // Verificação da classificação de notas
        if (nota >= 9)
        {
            printf("\nA nota do aluno %d, Classificada: A.\n", contador);
        }
        else if (nota >= 7) // Já sabemos que é menor que 9, senão não estaria aqui!
        {
            printf("\nA nota do aluno %d, Classificada: B.\n", contador);
        }
        else if (nota >= 5) // Se chegou aqui, já sabemos que é menor que 7!
        {
            printf("\nA nota do aluno %d, Classificada: C.\n", contador);
        }
        else // Se não foi nada disso acima, com certeza é menor que 5.
        {
            printf("\nA nota do aluno %d, Classificada: D.\n", contador);
        }
    }

    return 0;
}