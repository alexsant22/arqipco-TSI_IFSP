/*
6.2. Escreva um programa que leia a quantidade de horas que um usuário passou no celular em um
dia e exiba o total semanal (considerando esse mesmo valor para 7 dias).
*/

#include <stdio.h>
int main()
{
    float horasDia;
    float horasSemanal;

    printf("Digite a quantidade de horas que voce utilizou o celular no dia?\nR: ");
    scanf("%f", &horasDia);

    horasSemanal = horasDia * 7;

    printf("De acordo com o usu do celular em um dia foi %.2f, em uma semana sera aproximadamente: %.2f", horasDia, horasSemanal);

    return 0;
}