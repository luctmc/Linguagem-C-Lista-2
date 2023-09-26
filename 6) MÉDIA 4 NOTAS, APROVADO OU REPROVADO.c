/*Enunciado:6) MÉDIA 4 NOTAS, APROVADO/REPROVADO: Ler os valores de quatro notas escolares de um aluno.
Calcular a média aritmética e apresentar a seguinte mensagem “aprovado” se a média obtida for
maior ou igual a 6.0, caso contrário, apresentar a mensagem “reprovado”. Informar junto de cada
mensagem o valor da média obtida.
Lucas Timponi Mercadante Castro | Ra: 2304913*/
#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    printf("Digite a quarta nota: ");
    scanf("%f", &nota4);

    // Calcular a média aritmética
    media = (nota1 + nota2 + nota3 + nota4) / 4.0;

    printf("A média obtida é: %.2f\n", media);

    // Verificar se o aluno foi aprovado ou reprovado
    if (media >= 6.0) {
        printf("Aprovado!\n");
    } else {
        printf("Reprovado!\n");
    }

    return 0;
}
