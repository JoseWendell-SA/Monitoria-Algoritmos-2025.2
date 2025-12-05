/*
==================================================
PROBLEMA 9
==================================================
Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e a seguir leia um número inteiro N entre 1 e 5 e calcule o maior elemento da linha N.
*/

#include <stdio.h>

const int ORDEM = 5;

/*
1 2 3
4 5 6
7 8 9


*/

void main() {
    float matriz[ORDEM][ORDEM], maior;
    int numN;

    for (int linha = 0; linha < ORDEM; linha++) {
        for (int col = 0; col < ORDEM; col++) {
            printf("matriz[%d][%d]: ", linha, col);
            scanf("%f", &matriz[linha][col]);
        }
    }

    printf("Informe o número da linha: ");
    scanf("%d", &numN);

    for (int linha = 0; linha < ORDEM; linha++) {
        for (int col = 0; col < ORDEM; col++) {
            if (numN == (linha + 1)) {
                if (col == 0) {
                    maior = matriz[linha][col];
                } else {
                    if (matriz[linha][col] > maior) {
                        maior = matriz[linha][col];
                    }
                }
            }
        }
    }

    printf("Maior número da linha %d: %.1f", numN, maior);
}
