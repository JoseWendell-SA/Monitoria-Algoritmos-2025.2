/*
==================================================
PROBLEMA 5
==================================================
Escreva um programa que leia uma matriz quadrada de ordem 3 de números reais e, em
seguida, leia um número real N e calcule o produto da matriz informada pelo número N.
*/

#include <stdio.h>

/*
1.0 2.0 3.0
4.0 5.0 6.0
7.0 8.0 9.0

N = 2.0

produto = 2.0 4.0 6.0
          
*/

const int ORDEM = 3;

void main() {
    float matriz[ORDEM][ORDEM], num;

    for (int linha = 0; linha < ORDEM; linha++) {
        for (int col = 0; col < ORDEM; col++) {
            printf("matriz[%d][%d]: ", linha, col);
            scanf("%f", &matriz[linha][col]);
        }
    }

    printf("Informe o número N: ");
    scanf("%f", &num);

    for (int linha = 0; linha < ORDEM; linha++) {
        for (int col = 0; col < ORDEM; col++) {
            printf("%.1f ", matriz[linha][col] * num);
        }
        printf("\n");
    }
}
