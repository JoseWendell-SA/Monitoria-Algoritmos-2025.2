/*
==================================================
PROBLEMA 6
==================================================
Escreva um programa que leia duas matrizes quadradas de ordem 3 de números reais e
calcule a soma dessas duas matrizes.
*/

#include <stdio.h>

/*
1 2 3     9 8 7    10 10 10
4 5 6  +  6 5 4 =  
7 8 9     3 2 1
*/

const int ORDEM = 3;

void main() {
    float matriz1[ORDEM][ORDEM], matriz2[ORDEM][ORDEM];

    printf("Informe os valores da primeira matriz: ");
    for (int linha = 0; linha < ORDEM; linha++) {
        for (int col = 0; col < ORDEM; col++) {
            printf("matriz[%d][%d]: ", linha, col);
            scanf("%f", &matriz1[linha][col]);
        }
    }

    printf("Informe os valores da segunda matriz: ");
    for (int linha = 0; linha < ORDEM; linha++) {
        for (int col = 0; col < ORDEM; col++) {
            printf("matriz[%d][%d]: ", linha, col);
            scanf("%f", &matriz2[linha][col]);
        }
    }

    for (int linha = 0; linha < ORDEM; linha++) {
        for (int col = 0; col < ORDEM; col++) {
            float soma = matriz1[linha][col] + matriz2[linha][col];

            printf("%.1f ", soma);
        }

        printf("\n");
    }
}
