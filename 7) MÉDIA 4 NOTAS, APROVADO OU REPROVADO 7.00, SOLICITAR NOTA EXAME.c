/*Enunciado:7) MÉDIA 4 NOTAS, APROVADO/REPROVADO 7.00, SOLICITAR NOTA EXAME: Ler os valores de quatro
notas escolares de um aluno. Calcular a média aritmética e apresentar a mensagem “aprovado” se
a média obtida for maior ou igual a 7, caso contrário, deve solicitar a nota de exame do aluno e
calcular a nova média aritmética entre a nota de exame e a primeira média aritmética. Se o valor
da nova média for maior ou igual a 5, apresentar a mensagem “aprovado em exame”, caso
contrário, apresentar a mensagem “reprovado”. Informar junto de cada mensagem o valor da
média obtida.
Lucas Timponi Mercadante Castro | Ra: 2304913*/
#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4, media, notaExame, novaMedia;

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

    // Verificar se o aluno foi aprovado ou precisa de exame
    if (media >= 7.0) {
        printf("Aprovado!\n");
    } else {
        printf("Informe a nota do exame: ");
        scanf("%f", &notaExame);

        // Calcular a nova média considerando a nota do exame
        novaMedia = (media + notaExame) / 2.0;

        printf("A nova média obtida é: %.2f\n", novaMedia);

        // Verificar se o aluno foi aprovado no exame ou reprovado
        if (novaMedia >= 5.0) {
            printf("Aprovado em exame!\n");
        } else {
            printf("Reprovado!\n");
        }
    }

    return 0;
}
