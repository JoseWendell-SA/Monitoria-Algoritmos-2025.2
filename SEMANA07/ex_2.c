/*
==================================================
PROBLEMA 2
==================================================
Escreva um programa que leia um número inteiro positivo N e informe todos os termos da série de Fibonacci que são menores ou iguais a N.
*/

#include <stdio.h>


// 2, 3, 5, 8, 13...

/*
proximo = anterior + atual;
anterior = atual (3);
atual = proximo (5)
*/


void main() {
    int N;
    
    printf("Digite o valor de N: ");
    scanf("%d", &N);

    int anterior = 0, atual = 1, proximo;

    while (atual <= N) {
        printf("%d ", atual);
        proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
    }
}
