/*
==================================================
PROBLEMA 1
==================================================
Escreva um programa que leia um número inteiro entre 0 e 255 e calcule o seu valor correspondente em binário.
*/

#include <stdio.h>


void main() {
    int num = 19;
    int binario[100];
    int idx = 0;

    while (num % 2 != num) {
        binario[idx] = num % 2;
        num /= 2;
        idx++;
    }

    binario[idx] = num;
    for (int c = idx; c >= 0; c--) {
        printf("%d ", binario[c]);
    }
}
