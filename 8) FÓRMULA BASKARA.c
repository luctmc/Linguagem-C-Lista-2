/*Enunciado:8) FÓRMULA BASKARA: Ler três valores numérico (representados por a, b, c) e efetuar o cálculo da
equação completa de segundo grau utilizando a formula de baskara (considere todas as possíveis
condições para delta: delta < 0, delta > 0 e delta = 0). Lembre-se de que é completa a equação de
segundo grau que possui simultaneamente as variáveis A, B e C diferentes de zero.
Lucas Timponi Mercadante Castro | Ra: 2304913*/
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float delta, x1, x2;

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &c);

    // Verificar se a equação é completa (a, b e c diferentes de zero)
    if (a != 0 && b != 0 && c != 0) {
        // Calcular o discriminante (delta)
        delta = b * b - 4 * a * c;

        if (delta > 0) {
            // Duas raízes reais distintas
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);

            printf("Duas raízes reais distintas:\n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        } else if (delta == 0) {
            // Duas raízes reais iguais
            x1 = -b / (2 * a);

            printf("Duas raízes reais iguais:\n");
            printf("x1 = x2 = %.2f\n", x1);
        } else {
            // Raízes complexas
            float parteReal = -b / (2 * a);
            float parteImaginaria = sqrt(-delta) / (2 * a);

            printf("Raízes complexas:\n");
            printf("x1 = %.2f + %.2fi\n", parteReal, parteImaginaria);
            printf("x2 = %.2f - %.2fi\n", parteReal, parteImaginaria);
        }
    } else {
        printf("A equação não é completa (a, b e c devem ser diferentes de zero).\n");
    }

    return 0;
}


