/*
==================================================
PROBLEMA 8
==================================================
Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e calcule
o valor da soma dos elementos de cada uma de suas linhas e colunas.
*/

#include <stdio.h>


const int ORDEM = 3;

void main() {
    float matriz[ORDEM][ORDEM], soma_linhas[ORDEM], soma_colunas[ORDEM];

    for (int idx = 0; idx < ORDEM; idx++) {
        soma_linhas[idx] = 0;
        soma_colunas[idx] = 0;
    }

    // soma_linha[65, 10, 2, 3, 4, 5, 6, 7]
    printf("Informe os elementos da matriz: \n");
    for (int linha = 0; linha < ORDEM; linha++) {
        for (int col = 0; col < ORDEM; col++) {
            printf("Matriz[%d][%d]: ", linha, col);
            scanf("%f", &matriz[linha][col]);
        }
    }

    /*
    1 1 1
    2 5 8

    1 2 3 -> 6
    4 5 6 -> 15
    7 8 9 -> 24
    */

    for (int linha = 0; linha < ORDEM; linha++) {
        for (int col = 0; col < ORDEM; col++) {
            soma_linhas[linha] += matriz[linha][col];
            soma_colunas[col] += matriz[linha][col];
        }
    }

    printf("\nSoma das linhas: \n");
    for (int idx = 0; idx < ORDEM; idx++) {
        printf("Linha %d: %.2f \n", idx + 1, soma_linhas[idx]);
    }
    
    printf("\nSoma das colunas: \n");
    for (int idx = 0; idx < ORDEM; idx++) {
        printf("Coluna %d: %.2f \n", idx + 1, soma_colunas[idx]);
    }
}
