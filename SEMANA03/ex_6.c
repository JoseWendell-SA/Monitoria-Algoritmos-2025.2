/*
==================================================
PROBLEMA 6
==================================================
Escreva um programa que leia três números inteiros distintos e identifique o maior número informado.
*/

#include <stdio.h>
#include <stdlib.h>

void main() {
    int a, b, c;
    int maior;

    printf("Informe 3 (tres) numeros [SEPARADOS POR ESPACO]: ");
    scanf("%d %d %d", &a, &b, &c);

    /*
    a = 2
    b = 2
    c = 1
    */

    // if (a > b && a > c) {
    //     maior = a;
    // } else if (b > a && b > c) {
    //     maior = b;
    // } else {
    //     maior = c;
    // }

    /*
    a = 2
    b = 3
    c = 1
    */
    if (a >= b) {
        maior = a > c ? a : c;
    } else if (b >= a) {
        maior = b > c ? b : c;
    }

    printf("O maior numero eh %d.", maior);
}




// void main() {
//     int numA, numB, numC;
//     int maior;

//     printf("Informe 3 (tres) numeros [SEPARADOS POR ESPACO]: ");
//     scanf("%d %d %d", &numA, &numB, &numC);

//     if (numA >= numB) {
//         maior = numA > numC ? numA : numC;
//     } else if (numB >= numA) {
//         maior = numB > numC ? numB : numC;
//     } else {
//         maior = numC;
//     }

//     printf("%d eh o maior numero!", maior);
// }
