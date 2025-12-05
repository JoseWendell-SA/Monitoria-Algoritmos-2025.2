/*
==================================================
PROBLEMA 8
==================================================
Escreva um programa que leia uma matriz quadrada de ordem três de números inteiros e identifique a posição em que se encontra o maior número da matriz.
*/

#include <stdio.h>

/*
1 2 3
4 5 6
7 8 9

linha = 3
coluna = 3

*/

const int ORDEM = 3;

void main() {
    int matriz[ORDEM][ORDEM], maior, linha_maior, col_maior;

    for (int linha = 0; linha < ORDEM; linha++) {
        for (int col = 0; col < ORDEM; col++) {
            printf("matriz[%d][%d]: ", linha, col);
            scanf("%d", &matriz[linha][col]);
        }
    }

    for (int linha = 0; linha < ORDEM; linha++) {
        for (int col = 0; col < ORDEM; col++) {
            if (linha == 0 && col == 0) {
                maior = matriz[linha][col];
                linha_maior = linha + 1;
                col_maior = col + 1;
            } else {
                if (matriz[linha][col] > maior) {
                    maior = matriz[linha][col];
                    linha_maior = linha + 1;
                    col_maior = col + 1;
                }
            }
        }
    }

    printf("Maior número: %d\nPosição: (%d, %d).", maior, linha_maior, col_maior);
}
