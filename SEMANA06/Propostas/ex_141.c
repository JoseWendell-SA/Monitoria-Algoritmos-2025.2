/*
==================================================
PROBLEMA 8
==================================================
Escreva um programa que leia três números inteiros positivos e calcule o MMC dos números lidos.
*/

#include <stdio.h>


/*
4, 7, 9 | 2
2, 7, 9 | 2
1, 7, 9 | 3
1, 7, 3 | 3
1, 7, 1 | 7 // 2 * 2 * 3 * 3 * 7
*/


int calcularMMC(int x, int y, int z) {
    int divisor = 2;
    int mmc = 1;

    while (x > 1 || y > 1 || z > 1) {
        int eDivisivel = 0;

        if (x % divisor == 0) {
            x /= divisor;
            eDivisivel = 1;
        }

        if (y % divisor == 0) {
            y /= divisor;
            eDivisivel = 1;
        }

        if (z % divisor == 0) {
            z /= divisor;
            eDivisivel = 1;
        }

        if (eDivisivel) {
            mmc *= divisor;
        } else {
            divisor++;
        }
    }

    return mmc;
}

void main() {
    int x, y, z;

    printf("Informe os tres numeros inteiros [SEPARADOS POR ESPACO]: ");
    scanf("%d %d %d", &x, &y, &z);

    int mmc = calcularMMC(x, y, z);
    printf("MMC de %d, %d e %d = %d", x, y, z, mmc);
}