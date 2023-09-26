/*Enunciado:4) EXIBIR DIFERENÇA 2 VALORES: Crie um programa que leia dois valores numéricos inteiros quaisquer
em qualquer ordem, o programa deverá identificar qual é o menor e maior valor, e então deverá
exibir o valor da diferença de valor subtraindo o menor valor do maior valor.
Lucas Timponi Mercadante Castro | Ra: 2304913*/
#include <stdio.h>

int main() {
    int valor1, valor2, maior, menor, diferenca;

    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &valor2);

    // Determinar o maior e o menor valor
    if (valor1 > valor2) {
        maior = valor1;
        menor = valor2;
    } else {
        maior = valor2;
        menor = valor1;
    }

    // Calcular a diferença
    diferenca = maior - menor;

    printf("O maior valor é: %d\n", maior);
    printf("O menor valor é: %d\n", menor);
    printf("A diferença entre os valores é: %d\n", diferenca);

    return 0;
}


