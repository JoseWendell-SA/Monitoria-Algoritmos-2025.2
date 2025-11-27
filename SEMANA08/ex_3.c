/*
==================================================
PROBLEMA 3
==================================================
Escreva um programa que simule o funcionamento de um caixa eletrônico. O programadeve permitir a realização de vários saques. Para cada saque o programa deve ler o valor a ser sacado pelo usuário (que deve ser informado como um número inteiro) e identificar quantas cédulas de cada tipo devem ser usadas para que o saque seja efetuado. Você pode supor que o caixa tem cédulas de R$ 10,00, R$ 20,00, R$ 50,00 e R$ 100,00. O valor máximo de um saque é R$ 1000,00 e, para cada saque, deve-se priorizar o uso das cédulas maiores. Por exemplo, caso o usuário queira fazer um saque de R$ 100,00, o programa deve sugeriruma única cédula de R$ 100,00 e não duas de R$ 50,00. Caso o usuário informe um valor que não possa ser sacado (por exemplo, R$ 75,00), o programa deve informar o usuário sobre a impossibilidade de se realizar o saque. O processo de leitura dos saques deve ser encerrado quando o usuário informar um saque com valor 0, que não deve ser processado.Após o fim do processo de leitura, o programa deve informar a soma de todos os saques realizados e o total de cada cédula para a realização de todos os saques realizados.
*/

#include <stdio.h>

/*
valor = 1080
c100 = valor / 100;
valor %= 100;
c50 = 80 / 50 = 1;
valor %= 50 = 30;
c20 = 30 / 20 = 1;
valor %= 10; 
c10 = 10 / 10 = 1;
valor %= 10 = 0;

if (valor > 1000) = invalido

- valor incorreto quando sobrar dinheiro.

if (valor == 0) break;

---------------------------
soma dos saques
total de cada cedula
*/


void main() {
    int valor_saque, valor_total_sacado;
    int tot_c100 = 0, tot_c50 = 0, tot_c20 = 0, tot_c10 = 0;

    do {
        printf("\nDigite o valor para saque: ");
        scanf("%d", &valor_saque);

        if (valor_saque == 0) continue;
        if (valor_saque > 1000 || (int) valor_saque % 10 != 0) {
            printf("Não é possível sacar esse valor!");
            continue;
        };

        int resto = valor_saque;
        int c100 = resto / 100;
        resto %= 100;

        int c50 = resto / 50;
        resto %= 50;

        int c20 = resto / 20;
        resto %= 20;

        int c10 = resto / 10;
        resto %= 10;

        valor_total_sacado += valor_saque;
        tot_c100 += c100;
        tot_c50 += c50;
        tot_c20 += c20;
        tot_c10 += c10;
    } while (valor_saque > 0);

    printf("Valor total sacado: %d\n", valor_total_sacado);
    printf("100: %d\n", tot_c100);
    printf("50: %d\n", tot_c50);
    printf("20: %d\n", tot_c20);
    printf("10: %d\n", tot_c10);
}