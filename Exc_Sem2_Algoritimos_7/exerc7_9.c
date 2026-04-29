/*
7.9. Um motorista deseja calcular o consumo médio de combustível do veículo. Elabore um programa
(ou pseudocódigo) que leia:
− a distância total percorrida (em quilômetros);
− a quantidade de combustível consumida (em litros).
Calcule e mostre o consumo médio do veículo em km/L.
*/

#include <stdio.h>
int main()
{
    float distanciaKM;
    float combustivelL;
    float consmumoMedio;

    printf("Digite a distancia toltal percorrida (em quilometros):\n");
    scanf("%f", &distanciaKM);

    printf("Digite a quantidade de combustivel consumida (em litros):\n");
    scanf("%f", &combustivelL);

    consmumoMedio = distanciaKM / combustivelL;

    printf("O consumo medio que voce teve foi: %.2f", consmumoMedio);

    return 0;
}