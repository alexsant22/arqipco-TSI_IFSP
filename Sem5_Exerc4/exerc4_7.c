/*
4.7. Crie um menu:
1 – Converter metros para centímetros
2 – Converter centímetros para metros
3 – Converter kg para gramas
4 – Converter gramas para kg
Escreva um programa que leia a opção e o valor, exibindo o resultado.
*/

#include <stdio.h>
int main()
{
    int menu;
    float metros, centimetros, kg, gramas;

    printf("Digite uma das opcoes do Menu:\n");
    printf("1 - Converter metros para centimetros\n");
    printf("2 - Converter centimetros para metros\n");
    printf("3 - Converter kg para gramas\n");
    printf("4 - Converter gramas para kg\n");

    printf("Digite a opcao: ");
    scanf("%d", &menu);

    switch (menu)
    {
    case 1:
        printf("\nDigite a medida em metros: ");
        scanf("%f", &metros);

        centimetros = metros * 100;

        printf("\nO valor em Metros: %.2fm\nO valor em Centimetros: %.2fcm", metros, centimetros);
        break;

    case 2:
        printf("\nDigite a medida em centimetros: ");
        scanf("%f", &centimetros);

        metros = centimetros / 100;

        printf("\nO valor em Centimetros: %.2fcm\nO valor em Metros: %.2fm", centimetros, metros);
        break;

    case 3:
        printf("\nDigite o valor em Quilogramas(kg): ");
        scanf("%f", &kg);

        gramas = kg * 1000;

        printf("\nO valor em Quilogramas(kg): %.2fkg\nO valor em Gramas(g): %.2fg", kg, gramas);
        break;

    case 4:
        printf("\nDigite o valor em Gramas(g): ");
        scanf("%f", &gramas);

        kg = gramas / 1000;

        printf("\nO valor em Gramas(g): %.2fg\nO valor em Quilogramas(kg): %.2fkg", gramas, kg);
        break;

    default:
        printf("\nErro: Opcao do menu invalida!");
        break;
    }

    return 0;
}