/*
==================================================
PROBLEMA 2
==================================================
Escreva um programa que leia um número inteiro N e imprima dos 10 primeiros elementos da sua tabuada. A saída do programa deve seguir o formato abaixo, que mostra os 5 primeiros elementos da tabuada do 2.

1 X 2 = 2
2 X 2 = 4
3 X 2 = 6
4 X 2 = 8
5 X 2 = 10
*/

#include <stdio.h>
#include <stdlib.h>

void main() {
    int numN;

    printf("Informe um número: ");
    scanf("%d", &numN);

    printf("1 x %d = %d\n", numN, 1 * numN);
    printf("2 x %d = %d\n", numN, 2 * numN);
    printf("3 x %d = %d\n", numN, 3 * numN);
    printf("4 x %d = %d\n", numN, 4 * numN);
    printf("5 x %d = %d\n", numN, 5 * numN);
    printf("6 x %d = %d\n", numN, 6 * numN);
    printf("7 x %d = %d\n", numN, 7 * numN);
    printf("8 x %d = %d\n", numN, 8 * numN);
    printf("9 x %d = %d\n", numN, 9 * numN);
    printf("10 x %d = %d", numN, 10 * numN);
}
