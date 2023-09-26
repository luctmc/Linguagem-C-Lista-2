/*Enunciado:3) VALORES IGUAIS/DIFERENTES: Crie um programa que deverá solicitar dois valores inteiros
quaisquer, o programa deverá verificar se os valores são iguais ou diferentes, e então deverá exibir
mensagens informando essa análise.
Lucas Timponi Mercadante Castro | Ra: 2304913*/
#include <stdio.h>

int main() {
    int valor1, valor2;

    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &valor2);

    if (valor1 == valor2) {
        printf("Os valores %d e %d são iguais.\n", valor1, valor2);
    } else {
        printf("Os valores %d e %d são diferentes.\n", valor1, valor2);
    }

    return 0;
}
