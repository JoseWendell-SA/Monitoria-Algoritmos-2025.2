/*
==================================================
PROBLEMA 1
==================================================
Escreva um programa que leia um número inteiro positivo N e informe todos os múltiplos de N que existem no intervalo entre 1 e 100.
*/

#include <stdio.h>


void main() {
    int num;

    printf("Informe o numero N: ");
    scanf("%d", &num);
 
    for (int i = 1; i <= 100; i++) {
        if (i % num == 0) {
            printf("%d ", i);
        }
    }
}