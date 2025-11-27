/*
==================================================
PROBLEMA 6
==================================================
Escreva um programa que leia um número inteiro N e imprima a figura abaixo, onde N é o
número de elementos impressos na primeira linha. No exemplo abaixo, foi considerado que
N=5.
* // 1
** // 2
*** //3
**** //4
***** //5
*/

#include <stdio.h>

void main() {
    int N;

    printf("Informe N: ");
    scanf("%d", &N);

    for (int l = 1; l <= N; l++) {
        for (int c = 1; c <= l; c++) {
            printf("*");
        }
        printf("\n");
    }
}
