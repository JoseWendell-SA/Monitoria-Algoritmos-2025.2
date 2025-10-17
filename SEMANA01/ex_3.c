/*
==================================================
PROBLEMA 2
==================================================
Escreva um programa que leia o valor de uma temperatura em Celsius e calcule o seu valor
correspondente em Fahrenheit e em Kelvin.
*/

#include <stdio.h>

void main()
{
    float celsius;
    printf("Informe o grau em celsius: ");
    scanf("%f", &celsius);
    
    float fah = (celsius*9/5)+32;
    float kelvin = celsius + 273.15;

    printf("Convertendo para fahrenheit eh: %.2f\n", fah);
    printf("Convertendo para kelvin eh: %.2f", kelvin);
}