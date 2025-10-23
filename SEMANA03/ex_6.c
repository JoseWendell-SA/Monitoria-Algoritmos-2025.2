/*
==================================================
PROBLEMA 6
==================================================
Escreva um programa que leia três números inteiros distintos e identifique o maior número informado.
*/

#include <stdio.h>
#include <stdlib.h>

void main() {
    int numA, numB, numC;
    int maior;

    printf("Informe 3 (tres) numeros [SEPARADOS POR ESPACO]: ");
    scanf("%d %d %d", &numA, &numB, &numC);

    if (numA >= numB) {
        maior = numA > numC ? numA : numC;
    } else if (numB >= numA) {
        maior = numB > numC ? numB : numC;
    } else {
        maior = numC;
    }

    printf("%d eh o maior numero!", maior);
}
