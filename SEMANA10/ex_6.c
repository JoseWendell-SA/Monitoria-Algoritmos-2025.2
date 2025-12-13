/*
==================================================
PROBLEMA 6
==================================================
Escreva um programa que leia uma matriz quadrada de ordem 5 de números inteiros e um
inteiro N e verifique quantas vezes o número N aparece dentro da matriz.
*/

#include <stdio.h>

const int ORDEM = 3;

void main() {
    int matriz[ORDEM][ORDEM], numN, cont;

    printf("Informe os elementos da matriz: \n");
    for (int linha = 0; linha < ORDEM; linha++) {
        for (int col = 0; col < ORDEM; col++) {
            printf("Matriz[%d][%d]: ", linha, col);
            scanf("%d", &matriz[linha][col]);
        }
    }

    printf("Informe um número: ");
    scanf("%d", &numN);

    for (int linha = 0; linha < ORDEM; linha++) {
        for (int col = 0; col < ORDEM; col++) {
            if (matriz[linha][col] == numN) cont++;
        }
    }

    printf("%d aparece %d vezes!", numN, cont);
}
