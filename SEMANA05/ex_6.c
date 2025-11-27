/*
==================================================
PROBLEMA 6
==================================================
Escreva um programa que leia um texto e, em seguida, leia dois caracteres x e y e substitua, no texto informado, todas as ocorrências do caractere x pelo caractere y. Por exemplo, se o texto informado foi “banana”, o caractere x for “a” e o caractere y for “e”, o texto deve ser alterado para “benene”.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void toUpper(char *texto) {
    for (int i = 0; i <= strlen(texto); i++) {
        if (texto[i] >= 97 && texto[i] <= 122) {
            texto[i] -= 32;
        }
    }
    printf("%s", texto);
}

void main() {
    char texto[100];

    printf("Informe o texto: ");
    fgets(texto, 100, stdin);

    char x = 'Z';
    char y = 'S';


    // alternativa: strlen()
    // for (int i = 0; texto[i] != '\0'; i++) {
    //     if (texto[i] == x) {
    //         texto[i] = y;
    //     }
    // }

    toUpper(texto);


    printf("%s %c %c", texto, x, y);

    int i = 0;
    while (texto[i]) {
        if (texto[i] == x) {
            texto[i] = y;
        }

        i++;
    }

    printf("%s", texto);
}