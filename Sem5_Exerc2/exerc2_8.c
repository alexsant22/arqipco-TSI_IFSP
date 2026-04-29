/*
2.8. Elabore um programa que leia a nota de 10 estudantes e informe:
- a maior nota
- a menor nota
- a média da turma
*/

#include <stdio.h>

int main()
{
    float nota;
    float maiorNota, menorNota;
    float soma = 0; // Iinicializar a soma com zero
    float media;

    printf("Digite a nota de 10 estudantes:\n");

    // Laço para repetir 10x
    for (int contador = 1; contador <= 10; contador++)
    {
        printf("Digite a nota do estudante %d: ", contador);
        scanf("%f", &nota);

        // Acumulamos a nota atual na soma total
        soma = soma + nota;

        // Lógica da Maior e Menor nota
        // Se for o primeiro aluno, a nota dele é automaticamente a maior e a menor
        if (contador == 1)
        {
            maiorNota = nota;
            menorNota = nota;
        }
        else
        {
            // Do segundo aluno em diante, testamos para ver se quebrou algum recorde
            if (nota > maiorNota)
            {
                maiorNota = nota;
            }

            if (nota < menorNota)
            {
                menorNota = nota;
            }
        }
    }

    // Calculando a média (Isso fica FORA do laço, depois que já somamos tudo)
    media = soma / 10;

    // Exibindo os resultados finais
    printf("\n--- Resultados da Turma ---\n");
    printf("Maior nota registrada: %.2f\n", maiorNota);
    printf("Menor nota registrada: %.2f\n", menorNota);
    printf("Media da turma: %.2f\n", media);

    return 0;
}