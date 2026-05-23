/*
2.2. Escreva um programa que utilize uma struct para armazenar informações de dispositivos
inteligentes de uma casa: nome do dispositivo, tipo (lâmpada, câmera, sensor etc.), status
(ligado/desligado) e consumo de energia em kWh.
Cadastre 5 dispositivos utilizando um array de structs e exiba:
    - Todos os dispositivos cadastrados.
    - O consumo energético total.
    - O dispositivo com maior consumo de energia
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct
{
    char nome[50];
    char tipo[50];
    bool status;
    float consumo_kwh;
} Dispositivo;

// Funções
void armazenarDados(Dispositivo lista[]);

int main()
{
    Dispositivo lista[5];

    armazenarDados(lista);

    return 0;
}

// Função para armazenar os dados
void armazenarDados(Dispositivo lista[])
{
    int status_temp;

    for (int i = 0; i < 5; i++)
    {
        printf("\nDigite o nome do dispositivo: ");
        fgets(lista[i].nome, sizeof(lista[i].nome), stdin);
        lista[i].nome[strcspn(lista[i].nome, "\n")] = '\0'; // Remove o Enter

        // printf("\n%s\n", lista[i].nome);

        printf("\nDigite o tipo do dispositivo: ");
        fgets(lista[i].tipo, sizeof(lista[i].tipo), stdin);
        lista[i].tipo[strcspn(lista[i].tipo, "\n")] = '\0';

        printf("\nDigite se esta ligado(1) ou desligado(0): ");
        scanf("%d", &status_temp);

        if (status_temp == 1)
        {
            lista[i].status = true;
        }
        else
        {
            lista[i].status = false;
        }

        printf("\nDigite o consumo de energia (kwh): ");
        scanf("%f", &lista[i].consumo_kwh);

        getchar(); // Liberar buffer do fgets
    }
}