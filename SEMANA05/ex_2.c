/*
==================================================
PROBLEMA 2
==================================================
Escreva um programa que leia um número inteiro N e imprima todos os seus divisores exatos.
*/

#include <stdio.h>

void main() {
    int num;
    
    printf("Informe o número: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", num / i);
        }
    }
}
