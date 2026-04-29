/*
4.6. Um sistema acadêmico avalia um estudante de acordo com a frequência e a nota final. As regras
são:
 Se a frequência for menor que 75%, o estudante está “Reprovado por falta” (independentemente
da nota)
 Caso contrário (frequência ≥ 75%):
    o Se a nota for menor que 4, está “Reprovado”
    o Se a nota for maior ou igual a 4 e menor que 6, está em “IFA” (Instrumento Final de
    Avaliação)
    o Se a nota for maior ou igual a 6, está “Aprovado”
Escreva um programa que leia a nota e a frequência, e exiba o resultado.
*/

#include <stdio.h>
int main()
{
    float frequencia, notaFinal;

    printf("Digite o valor de sua frequencia (0 a 100%):\n");
    scanf("%f", &frequencia);

    printf("Digite o valor da sua nota final (0 a 10):\n");
    scanf("%f", &notaFinal);

    if (frequencia < 75)
    {
        printf("Reprovado por falta");
    }
    else if (notaFinal > 4)
    {
        printf("Reprovado");
    }
    else if (notaFinal >= 6)
    {
        printf("Aprovado");
    }
    else
    {
        printf("IFA (Instrumento Final de Avaliação) ");
    }

    return 0;
}