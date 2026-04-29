/*
3.5. Escreva um programa que leia temperaturas até que seja digitado um valor inválido (ex: menor
que -50). Após isso, calcule:
- A temperatura média
- A maior e a menor temperatura
*/

#include <stdio.h>
int main()
{
    float temperatura;
    float somaTemperatura = 0;
    float temperaturaMedia;
    float maiorTemperatura;
    float menorTemperatura;
    int qtdTemperaturas = 0;

    // Pedindo temperatura para iniciar While
    printf("Digite uma temperatura (pare digitando -50 ou 50): ");
    scanf("%f", &temperatura);

    // A maior e a menor temperatura vao ser as mesmas inicialmente
    maiorTemperatura = temperatura;
    menorTemperatura = temperatura;

    while ((temperatura > -50) && (temperatura < 50)) // Condicional para temperaturas inválidas
    {
        somaTemperatura = somaTemperatura + temperatura; // Soma das temperaturas informadas
        qtdTemperaturas++;                               // Contador de quantidade de temperaturas informadas

        if (temperatura > maiorTemperatura) // Descobrindo maior temperatura de acordo com a temperatura informada
        {
            maiorTemperatura = temperatura;
        }
        else if (temperatura < menorTemperatura) // Descobrindo a menor temperatura de acordo com a temperatura informada
        {
            menorTemperatura = temperatura;
        }

        // Pedindo novamente temperatura para iniciar While
        printf("\nDigite uma temperatura (pare digitando -50 ou 50): ");
        scanf("%f", &temperatura);
    }

    // Fazendo a média
    if (qtdTemperaturas > 0)
    {
        temperaturaMedia = somaTemperatura / qtdTemperaturas;
    }
    else
    {
        temperaturaMedia = 0;
    }

    // Exibindo resultados
    printf("\nTemperatura media: %f.\nMaior temperatura: %f.\nMenor temperatura: %f.", temperaturaMedia, maiorTemperatura, menorTemperatura);

    return 0;
}