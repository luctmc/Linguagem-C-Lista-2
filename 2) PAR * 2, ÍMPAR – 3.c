/*Enunciado:2) PAR * 2, ÍMPAR – 3: Crie um programa que deverá solicitar um determinado valor inteiro, o valor
deverá ser verificado, caso seja um valor par deverá multiplicar por dois, caso o valor seja ímpar,
deverá subtrair 3. O programa deverá exibir o resultado da operação realizada.
Lucas Timponi Mercadante Castro | Ra: 2304913*/

#include <stdio.h>

int main() {
    int numero, resultado;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        // Se o número for par, multiplique por 2
        resultado = numero * 2;
        printf("O resultado de %d * 2 é: %d\n", numero, resultado);
    } else {
        // Se o número for ímpar, subtraia 3
        resultado = numero - 3;
        printf("O resultado de %d - 3 é: %d\n", numero, resultado);
    }

    return 0;
}
