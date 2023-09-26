/*Enuniado:11) ACRESCENTAR SERVIÇO GARÇOM: Crie um programa que solicite o valor individual gasto por três
amigos em um restaurante, o programa também deverá solicitar se poderá ser acrescido os
serviços de atendimento (10%) ao valor total da conta, no final o programa deverá exibir três
informações, o valor total dos gastos, o valor do acréscimo dos serviços (este valor deverá ser 0.00
ou 10% do valor total dos gastos) e o valor total da compra (valor total acrescido dos serviços).
Lucas Timponi Mercadante Castro | Ra: 2304913*/
#include <stdio.h>

int main() {
    float gasto1, gasto2, gasto3, valorTotal, acrescimoServicos, valorTotalComServicos;

    printf("Digite o valor gasto pelo primeiro amigo: ");
    scanf("%f", &gasto1);

    printf("Digite o valor gasto pelo segundo amigo: ");
    scanf("%f", &gasto2);

    printf("Digite o valor gasto pelo terceiro amigo: ");
    scanf("%f", &gasto3);

    // Calcular o valor total dos gastos
    valorTotal = gasto1 + gasto2 + gasto3;

    printf("Deseja acrescentar 10%% de serviços de atendimento (1 para Sim, 0 para Não): ");
    int acrescentarServicos;
    scanf("%d", &acrescentarServicos);

    // Calcular o acréscimo dos serviços
    if (acrescentarServicos == 1) {
        acrescimoServicos = valorTotal * 0.10;
    } else {
        acrescimoServicos = 0.0;
    }

    // Calcular o valor total da compra (gastos + serviços)
    valorTotalComServicos = valorTotal + acrescimoServicos;

    printf("Valor total dos gastos: R$%.2f\n", valorTotal);
    printf("Valor do acréscimo dos serviços: R$%.2f\n", acrescimoServicos);
    printf("Valor total da compra: R$%.2f\n", valorTotalComServicos);

    return 0;
}
