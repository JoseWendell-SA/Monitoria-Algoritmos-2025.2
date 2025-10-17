/*
==================================================
PROBLEMA 4
==================================================
Escreva um programa que leia o valor de uma distância percorrida em km e o tempo gasto em horas e calcule a velocidade média em m/s.
*/

#include <stdio.h>

void main() {
    float distancia_km, tempo_horas;
    float distancia_metros, tempo_segundos, velocidade_ms;

    printf("Digite a distância percorrida (em km): ");
    scanf("%f", &distancia_km);

    printf("Digite o tempo gasto (em horas): ");
    scanf("%f", &tempo_horas);

    distancia_metros = distancia_km * 1000;
    tempo_segundos = tempo_horas * 3600;

    velocidade_ms = distancia_metros / tempo_segundos;

    printf("A velocidade média é %.2f m/s\n", velocidade_ms);
}
