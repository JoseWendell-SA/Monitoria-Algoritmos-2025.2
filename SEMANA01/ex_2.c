/*
==================================================
PROBLEMA 2
==================================================
Escreva um programa que leia o valor da base e da altura de um triângulo e calcule a sua área.
*/

#include <stdio.h>

void main() {
    float base, altura, area;

    printf("Digite o valor da base do triângulo: ");
    scanf("%f", &base);

    printf("Digite o valor da altura do triângulo: ");
    scanf("%f", &altura);

    area = (base * altura) / 2;

    printf("A área do triângulo é: %.2f\n", area);
}
