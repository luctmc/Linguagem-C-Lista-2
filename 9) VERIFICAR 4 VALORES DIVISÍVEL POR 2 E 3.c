/*Enuniado:9) VERIFICAR 4 VALORES DIVISÍVEL POR 2 E 3: Ler quatro valores numéricos inteiros e apresentar os
valores que são divisíveis por 2 e 3 (pesquise por: “como obter o resto de uma divisão por inteiros”).
Lucas Timponi Mercadante Castro | Ra: 2304913*/
#include <stdio.h>

int main() {
    int valor1, valor2, valor3, valor4;

    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &valor2);

    printf("Digite o terceiro valor inteiro: ");
    scanf("%d", &valor3);

    printf("Digite o quarto valor inteiro: ");
    scanf("%d", &valor4);

    printf("Valores divisíveis por 2 e 3:\n");

    if (valor1 % 2 == 0 && valor1 % 3 == 0) {
        printf("%d\n", valor1);
    }

    if (valor2 % 2 == 0 && valor2 % 3 == 0) {
        printf("%d\n", valor2);
    }

    if (valor3 % 2 == 0 && valor3 % 3 == 0) {
        printf("%d\n", valor3);
    }

    if (valor4 % 2 == 0 && valor4 % 3 == 0) {
        printf("%d\n", valor4);
    }

    return 0;
}

