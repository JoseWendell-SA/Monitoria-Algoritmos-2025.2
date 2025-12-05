/*
==================================================
PROBLEMA 1
==================================================
Escreva um programa que leia um vetor de 10 números inteiros e, após terminar a leitura, leia um número inteiro N e imprima todos os elementos do vetor que são maiores que N.
*/

#include <stdio.h>

const int TAMANHO_VETOR = 10;

void main() {
    int nums[TAMANHO_VETOR], numN;
    int existeMaiores = 0;
    
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        printf("%dº número: ", i + 1);
        scanf("%d", &nums[i]);
    }

    printf("Informe o número: ");
    scanf("%d", &numN);

    for (int i = 0; i < TAMANHO_VETOR; i++) {
        const num = nums[i];
        
        if (num > numN) {
            printf("%d ", num);
            existeMaiores++;
        }
    }

    if (!existeMaiores) {
        printf("Não existem numeros maiores que %d no vetor!", numN);
    }
}
