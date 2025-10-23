/*
==================================================
PROBLEMA 4
==================================================
Escreva um programa que leia os valores das coordenadas X e Y e dois pontos P e Q e determine a distância entre estes dois pontos. A distância entre dois pontos pode ser determinada através da distância euclidiana.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main() {
    float x1, x2, y1, y2;
    float distancia;

    printf("Cordenadas do ponto P (x1, y1): ");
    scanf("%f%f", &x1, &y1);

    printf("Cordenadas do ponto Q (x2, y2): ");
    scanf("%f%f", &x2, &y2);

    distancia = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

    printf("Distancia entre P (%.2f, %.2f) e Q (%.2f, %.2f): %.2f", x1, y1, x2, y2, distancia);
}