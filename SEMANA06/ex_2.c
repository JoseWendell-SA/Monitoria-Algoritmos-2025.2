/*
==================================================
PROBLEMA 2
==================================================
Escreva um programa que leia dois números inteiros M e N e calcule o valor de MN. A potenciação deve ser calculada utilizando-se um comando de repetição, sem a utilização da função pow.
*/

#include <stdio.h>

void main() {
    int M, N;

    printf("Informe M e N [SEPARADOS POR ESPAÇO]: ");
    scanf("%d %d", &M, &N);

    // 2 * 1 = 2;
    // M = 2, N = 3
    // result = 1, 1 * 2 = 2; 2 * 2 = 4; 4 * 2 = 8;
    // i = 1, 2, 3, 4
    int result = 1;
    for (int i = 1; i <= N; i++) {
        result *= M;
    }

    printf("%d^%d = %d", M, N, result);
}
