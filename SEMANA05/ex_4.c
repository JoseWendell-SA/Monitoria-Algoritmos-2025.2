/*
==================================================
PROBLEMA 4
==================================================
Escreva um programa que leia o termo inicial e a razão de uma progressão aritmética e um número inteiro positivo N e imprima os N primeiros termos da progressão.
*/

#include <stdio.h>

void main() {
    int termoInicial, razao, numElementos;

    printf("Informe o termo inicial e a razão [SEPARADOS POR ESPAÇO]: ");
    scanf("%d %d", &termoInicial, &razao);
    printf("Informe a quantidade de elementos da PA: ");
    scanf("%d", &numElementos);

    int proxElemento = termoInicial;
    for (int i = 1; i <= numElementos; i++) {
        printf("%d ", proxElemento);
        proxElemento += razao;
    }
}
