/*
==================================================
PROBLEMA 2
==================================================
Escreva um programa que leia um vetor de 10 números inteiros e, após terminar a leitura,
leia um número inteiro N e imprima todas as posições em que o número N aparece dentro
do vetor.
*/

#include <stdio.h>

const int TAMANHO_VETOR = 10;

void main() {
    int nums[TAMANHO_VETOR], numN;
    int existeCorrespondencia = 0;

    for (int i = 0; i < TAMANHO_VETOR; i++) {
        printf("%dº número: ", i + 1);
        scanf("%d", &nums[i]);
    }

    printf("Informe o número: ");
    scanf("%d", &numN);

    for (int i = 0; i < TAMANHO_VETOR; i++) {
        const num = nums[i];
        if (num == numN) {
            printf("%d ", i);
            existeCorrespondencia++;
        }
    }


    // 0 = falso -> true
    if (!existeCorrespondencia) {
        printf("Não existe correspondencia para %d no vetor!", numN);
    }
}
