/*
==================================================
PROBLEMA 7
==================================================
Escreva um programa que leia um verbo regular no infinitivo (da 1a, 2a ou 3a conjugação) e
imprima a sua conjugação no presente do modo indicativo.
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void stringToUpper(char verbo[20]) {
    for (int i = 0; verbo[i]; i++) {
        verbo[i] = tolower(verbo[i]);
    }
}

void imprimirVerbo(char verbo[20]) {
    printf("[");
    for (int i = 0; i < 20; i++) {
        printf("%c, ", verbo[i]);
    }
    printf("]");
}
/*
- Terminados em -AR
eu o
tu as
ele a

- Terminados em -ER
eu -o
tu -es
el -e

*/


void main() {
    char verbo[20];
    char radical[20];
    int tamanho;

    printf("Verbo: ");
    scanf("%s", verbo);

    for (int i = 0; verbo[i]; i++) {
        verbo[i] = tolower(verbo[i]);
    }

    tamanho = strlen(verbo); // 5
    strncpy(radical, verbo, tamanho - 2);
    
    if (strcmp(&verbo[tamanho - 2], "ar") == 0) {
        printf("Eu %so\n", radical);
        printf("Tu %sas\n", radical);
        printf("Ele %sa\n", radical);
    } else {
        printf("Eu %so\n", radical);
        printf("Tu %ses\n", radical);
        printf("Ele %se\n", radical);
    }
}


/*
Falar -> falar

eu fal
tu fal
ele fal

eu falo
tu falas
ele fala
*/