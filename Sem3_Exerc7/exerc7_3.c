/*
7.3. Escreva um programa que leia um número inteiro representando uma senha. Considere que a
senha correta é 1234. Exiba "Senha correta" se o valor informado estiver correto, ou "Senha
incorreta" caso contrário.
*/

#include <stdio.h>
int main()
{
    int senha;
    int senhaCorreta = 1234;

    printf("Digite a senha de 4 digitos:\nSenha: ");
    scanf("%d", &senha);

    if (senha == senhaCorreta)
    {
        printf("Senha correta :p");
    }
    else
    {
        printf("Senha incorreta :/");
    }

    return 0;
}