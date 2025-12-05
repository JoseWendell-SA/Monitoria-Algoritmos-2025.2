/*
==================================================
PROBLEMA 4
==================================================
Escreva um programa que leia um vetor de vinte caracteres e verifique se o vetor é ou não
um palíndromo.
*/

#include <stdio.h>

const int TAMANHO_VETOR = 3;

void main() {
    char vetor[3] = {'o', 'v', 'i'};
    int isPalindromo = 1;


    /*
    20 -> posição inicial = 0; posição final = 19


    i = 0, 1
    j = 20 - 1 - 0 = 19 | 20 - 1 - 1 = 18
    
    */

    for (int i = 0; i < 3; i++) {
        int j = (TAMANHO_VETOR - 1) - i;
        if (vetor[i] != vetor[j]) {
            isPalindromo = 0;
            break;
        };
    }

    if (isPalindromo) {
        printf("É um polindromo");
    } else {
        printf("%s não é palindromo!", vetor);
    }
}
