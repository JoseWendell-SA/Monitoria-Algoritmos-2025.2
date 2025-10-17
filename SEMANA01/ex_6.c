/*
==================================================
PROBLEMA 6
==================================================
Escreva um programa que leia os valores de dois ângulos internos de um triângulo e calcule o valor do terceiro ângulo.
*/

#include <stdio.h>

const int SOMA_ANGULOS = 180;

void main() {
    float ang1, ang2, ang3;

    printf("Digite o valor do primeiro ângulo (em graus): ");
    scanf("%f", &ang1);

    printf("Digite o valor do segundo ângulo (em graus): ");
    scanf("%f", &ang2);

    ang3 = SOMA_ANGULOS - (ang1 + ang2);

    printf("ANGULO 1: %.2f graus\nANGULO 2: %.2f graus\nANGULO 3: %.2f graus", ang1, ang2, ang3);
}
