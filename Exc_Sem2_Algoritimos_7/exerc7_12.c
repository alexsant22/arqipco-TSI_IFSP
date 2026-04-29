/*
7.12. Uma pessoa pretende estimar o custo total de combustível de uma viagem. Elabore um
programa (ou pseudocódigo) que leia:
− a distância total da viagem (em quilômetros);
− o consumo médio do veículo (km por litro);
− o preço do litro do combustível.
Calcule e mostre o custo total estimado com combustível para realizar a viagem.
*/

#include <stdio.h>
int main()
{
    float distanciaKM, consumoMedio, precoLitro, litrosUsados, custoTotal;

    printf("Digite a distancia total da viagem (em quilometros): ");
    scanf("%f", &distanciaKM);

    printf("Digite o consumo medio do veiculo (km por litro): ");
    scanf("%f", &consumoMedio);

    printf("Digite o preco do litro do comnustivel: ");
    scanf("%f", &precoLitro);

    litrosUsados = distanciaKM / consumoMedio;
    custoTotal = litrosUsados * precoLitro;

    printf("O custo total estimado com combustivel e: R$ %.2f\n", custoTotal);

    return 0;
}