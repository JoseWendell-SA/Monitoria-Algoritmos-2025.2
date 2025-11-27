/*
==================================================
PROBLEMA 6
==================================================
Escreva um programa que leia um número inteiro positivo e calcule a soma de todos os seus algarismos.
*/

#include <stdio.h>

/*
1378 % 10 = 8
1378 / 10 = 137
137 % 10 = 7;
137 / 10 = 13
13 % 10 = 3;
13 / 10 = 1;
1 % 10 = 1;
1 / 10 = 0
*/

void main() {
    int num, soma = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    while (num > 0) {
        soma += num % 10;
        num /= 10;
    }
    
    printf("Soma: %d", soma);
}