/*
==================================================
PROBLEMA 8
==================================================
Escreva um programa que leia um texto e imprima o seu valor correspondente em caixa alta. Por exemplo, se o texto informado foi “Eu amo programar”, o programa deve imprimir o texto “EU AMO PROGRAMAR”. Para resolver a questão, você não pode usar a função toupper oferecida pela linguagem C.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// a -> A = -32;
// A -> a = +32

void main() {
    
    char texto[100];

    printf("Informe o texto: ");
    fgets(texto, 100, stdin);

    for (int i = 0; i <= strlen(texto); i++) {
        if (texto[i] >= 97 && texto[i] <= 122) {
            texto[i] -= 32;
        }
    }

    printf("%s", texto);
}