/*
==================================================
PROBLEMA 4
==================================================
Escreva um programa que leia um número inteiro N e imprima os N primeiros termos da ́série de Fibonacci. Considere que a série de Fibonacci 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...
*/

#include <stdio.h>

void main() {
    int N, ant = 0, atual = 1, prox;

    printf("Quantidade de termos que deseja imprimir: ");
    scanf("%d", &N);

    for (int n = 1; n <= N; n++) {
        prox = ant + atual;
        printf("%d ", atual);

        ant = atual;
        atual = prox;
    }
}
