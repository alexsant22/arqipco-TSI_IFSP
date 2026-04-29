/*
2.13. Crie um programa que leia a nota de 10 estudantes e informe a segunda maior nota da
turma.
*/

#include <stdio.h>
int main()
{
    float nota;

    // Inicializamos com um valor menor que a menor nota possível (0)
    float notaMaior = -1.0;
    float segundaNotaMaior = -1.0;

    printf("Digite as 10 notas dos alunos:\n");

    // Laço para 10x (10 notas)
    for (int contador = 1; contador <= 10; contador++)
    {
        printf("Digite a nota do aluno %d: ", contador);
        scanf("%f", &nota);

        // Verificação de notas
        if (nota > notaMaior)
        {
            // O antigo 1º lugar cai para 2º lugar
            segundaNotaMaior = notaMaior;

            // O novo 1º lugar assume o topo
            notaMaior = nota;
        }
        // Cenário 2: A nota não desbanca o 1º lugar, mas desbanca o 2º lugar!
        else if (nota > segundaNotaMaior)
        {
            segundaNotaMaior = nota;
        }
    }

    // Exibindo o resultado
    printf("\nA maior nota foi: %.2f", notaMaior); // Apenas para visualização
    printf("\nA segunda Nota maior foi: %.2f", segundaNotaMaior);

    return 0;
}