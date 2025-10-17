/*
==================================================
PROBLEMA 2
==================================================
Escreva um programa que leia um valor em polegadas e o converta para centímetros,
considerando que uma polegada equivale a 2.54 cm.
*/

#include <stdio.h>

void main()
{
    int polegadas;
    printf("Informe as polegadas: ");
    scanf("%d", &polegadas);
    
    float cm = polegadas*2.54;
    
    printf("%d polegadas para centimetros eh: %.2f", polegadas, cm);
}