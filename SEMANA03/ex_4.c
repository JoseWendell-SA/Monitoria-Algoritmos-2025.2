/*
==================================================
PROBLEMA 4
==================================================
Escreva um programa que leia o valor de um ano e verifique se ele é ou não bissexto. Um ano é bissexto se ele for (divisível por quatrocentos) ou se se ele for (divisível por 4 mas não for divisível por 100).
*/

#include <stdio.h>
#include <stdlib.h>

void main() {
    int ano;

    printf("Informe o ano: ");
    scanf("%d", &ano);

    // (condição) ? <executa> : <executa>  

    // (ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0) ? printf("%d eh bissexto!", ano) : printf("%d nao eh bissexto!", ano);

    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
        printf("%d eh bissexto!", ano);
    } else {
        printf("%d nao eh bissexto!", ano);
    }
}
