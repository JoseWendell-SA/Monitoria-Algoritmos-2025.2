/*
==================================================
PROBLEMA 2
==================================================
Escreva um programa que leia o número de gols marcados pelo time da casa e o número de gols marcado pelo time visitante e verifique se o jogo foi vencido pelo time da casa, pelo time visitante ou se terminou empatado.
*/


#include <stdio.h>

void main() {
    int gols_casa, gols_visitante;

    printf("Informe a quantidade de gols do time da casa: ");
    scanf("%d", &gols_casa);

    printf("Informe a quantidade de gols do time visitante: ");
    scanf("%d", &gols_visitante);

    if (gols_casa > gols_visitante) {
        printf("O time da casa ganhou por %d x %d", gols_casa, gols_visitante);
    } else if (gols_visitante > gols_casa) {
        printf("O time visitante ganhou por %d x %d", gols_casa, gols_visitante);
    } else {
        printf("A partida empatou por %d x %d", gols_casa, gols_visitante);
    }
}