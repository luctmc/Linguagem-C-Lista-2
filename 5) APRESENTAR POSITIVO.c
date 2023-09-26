/*Enunciado:5) APRESENTAR POSITIVO: Ler um valor numérico inteiro positivo ou negativo e apresentar o valor
lido como sendo um valor positivo, ou seja, se o valor lido for menor ou igual a zero, ele deve ser
multiplicado por -1.
Lucas Timponi Mercadante Castro | Ra: 2304913*/
#include <stdio.h>

int main() {
    int valor;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    // Verificar se o valor é menor ou igual a zero
    if (valor <= 0) {
        valor = -valor; // Converter em positivo multiplicando por -1
    }

    printf("O valor lido como positivo é: %d\n", valor);

    return 0;
}
