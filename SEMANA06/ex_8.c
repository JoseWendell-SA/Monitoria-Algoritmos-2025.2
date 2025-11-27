/*
==================================================
PROBLEMA 8
==================================================
Escreva um programa que leia um número inteiro N e imprima a figura abaixo, onde N é o
número de elementos impressos na primeira linha. No exemplo abaixo, foi considerado que
N=5.
***** 1
 **** 2
  *** 3
   ** 4
    * 5
*/

#include <stdio.h>

void main() {
    int N;

    printf("Digite o valor de N: ");
    scanf("%d", &N);
    
    /*
    N = 5;
    l = 5; 4
    e = 0
    
    c = 5
    */


    for (int linhas = N; linhas > 0; linhas--) {
        for (int e = 0; e < (N - linhas); e++) {
            printf(" ");
        }

        for (int c = linhas; c >= 1; c--) {
            printf("*");    
        }
        printf("\n");
    }
}
