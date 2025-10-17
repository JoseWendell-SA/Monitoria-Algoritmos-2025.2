/*
==================================================
PROBLEMA 2
==================================================
Escreva um programa que leia o valor do seno de um ângulo e calcule o valor do seu
cosseno.
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    float seno, coseno;
    printf("Informe o valor do seno: ");
    scanf("%f", &seno);
    
    coseno = sqrt(1-pow(seno, 2));

    printf("O resultado em cosseno eh: %.4f", coseno);

    getch();
}