/*Enunciado:1) PAR/ÍMPAR: Crie um programa que solicite do usuário um determinado valor inteiro, o programa
deverá verificar se o valor fornecido é um valor par ou ímpar (pesquise sobre como identificar se
um valor é par ou ímpar).
Lucas Timponi Mercadante Castro | Ra: 2304913*/

#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("%d é um número par.\n", numero);
    } else {
        printf("%d é um número ímpar.\n", numero);
    }

    return 0;
}
