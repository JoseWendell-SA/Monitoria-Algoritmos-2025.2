/*
==================================================
PROBLEMA 8
==================================================
Escreva um programa que leia um valor real a ser sacado pelo usuário e identifique
quantas cédulas de cada tipo devem ser usadas para que o saque seja efetuado. Você
pode supor que o caixa tem cédulas de R$ 10,00, R$ 20,00, R$ 50,00 e R$ 100,00. O
valor máximo de um saque é R$ 1000,00 e, para cada saque, deve ser dada
prioridade para as células maiores. A verificação deve ser realizada através de um
subprograma.
*/

#include <stdio.h>

// 1000 -> 10 = 1000 / 100
// 958 -> 958 / 100 = 9

void calcularCedulas(int valor) {
    int qtd100, qtd50, qtd20, qtd10;

    qtd100 = valor / 100;
    valor %= 100;

    qtd50 = valor / 50;
    valor %= 50;

    qtd20 = valor / 20;
    valor %= 20;

    qtd10 = valor / 10;
    valor %= 10;

    printf("%d cedulas de R$100\n", qtd100);
    printf("%d cedulas de R$50\n", qtd50);
    printf("%d cedulas de R$20\n", qtd20);
    printf("%d cedulas de R$10", qtd10);
}

void main() {
    float saque;

    printf("Informe o valor do saque: ");
    scanf("%f", &saque);

    if (saque <= 0 || saque > 1000) {
        printf("Valor inválido para saque!");
    }

    calcularCedulas(saque);
}