/*Enuniado:10) VERIFICAR SE (A + B) > C: Crie um programa que solicite três valores inteiros, o programa deverá
verificar se a soma dos dois primeiros valores é maior que o terceiro valor e então apresentar
mensagens informando tal análise.
Lucas Timponi Mercadante Castro | Ra: 2304913*/
#include <stdio.h>

int main() {
    int a, b, c;

    printf("Digite o valor de A: ");
    scanf("%d", &a);

    printf("Digite o valor de B: ");
    scanf("%d", &b);

    printf("Digite o valor de C: ");
    scanf("%d", &c);

    if (a + b > c) {
        printf("A soma de A e B é maior do que C.\n");
    } else {
        printf("A soma de A e B não é maior do que C.\n");
    }

    return 0;
}
