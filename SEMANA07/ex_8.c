/*
==================================================
PROBLEMA 8
==================================================
O Banco do Povo está realizando uma grande promoção em seus financiamentos. Ele financia qualquer valor em até 240 prestações. O valor da primeira prestação corresponde ao valor do empréstimo dividido pelo número de parcelas. Os valores das demais prestações
correspondem ao valor da parcela anterior acrescido de uma taxa de juros de 7%. Escreva um programa que leia o valor a ser financiado por um cliente e o número de prestações desejadas e calcule: o valor de cada prestação, o valor total que o cliente vai pagar pelo
empréstimo e a diferença entre o valor a ser pago e o valor financiado.
*/

#include <stdio.h>

/*
primeira_parcela = valor_financiamento / tot_parcelas;
parcela = parcela * 1.07

[1, tot_parcelas]
*/


void main() {
    float valor_financiamento, valor_prestacao, valor_total = 0;
    int num_parcelas;

    printf("Valor do financiamento: ");
    scanf("%f", &valor_financiamento);
    printf("Numero de parcelas: ");
    scanf("%d", &num_parcelas);

    valor_prestacao = valor_financiamento / num_parcelas;

    for (int parcela = 1; parcela <= num_parcelas; parcela++) {
        printf("%dº parcela: R$%.2f \n", parcela, valor_prestacao);

        valor_total += valor_prestacao;
        valor_prestacao *= 1.07;
    }

    printf("Valor Total: R$%.2f\n", valor_total);
    printf("Valor Juros: R$%.2f", valor_total - valor_financiamento);
}