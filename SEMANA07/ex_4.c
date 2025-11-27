/*
==================================================
PROBLEMA 4
==================================================
Escreva um programa que leia dois números inteiros positivos M e N e imprima todos os termos da série de Fibonacci que pertencem ao intervalo [M, N].
*/

#include <stdio.h>

void main() {
    int M, N;
    
    printf("Digite o intervalo [M, N]: ");
    scanf("%d %d", &M, &N);
    
    int anterior = 0, atual = 1, proximo;

    while (atual <= N) {
        if (atual >= M) {
            printf("%d ", atual);
        }

        proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
    }   
}
