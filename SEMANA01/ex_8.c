/*
==================================================
PROBLEMA 8
==================================================
Escreva um programa que leia o termo inicial e a razão de uma progressão aritmética e imprima os 5 primeiros termos desta progressão.
*/

#include <stdio.h>

void main() {
    int termo_inicial, razao;

    printf("Digite o termo inicial e a razão da PA [SEPARADOS POR ESPAÇO]: ");
    scanf("%d %d", &termo_inicial, &razao);

    printf("Os 5 primeiros termos da PA são:\n");
    printf("%d ", termo_inicial);
    printf("%d ", termo_inicial + razao);
    printf("%d ", termo_inicial + 2 * razao);
    printf("%d ", termo_inicial + 3 * razao);
    printf("%d\n", termo_inicial + 4 * razao);
}
