/*
==================================================
PROBLEMA 6
==================================================
Escreva um programa que leia o tamanho de um arquivo em MB e a taxa de transmissão da rede em KB/s e calcule o tempo aproximado necessário para a transmissão do arquivo. A resposta deve ser dada através de uma mensagem na forma X horas, Y minutos e Z segundos. Para resolver essa questão, considere que o tamanho do arquivo e a taxa de transmissão são números inteiros e que 1 MB = 1024 KB.
*/

#include <stdio.h>
#include <stdlib.h>

const int MB_TO_KB = 1024;

void main() {
    int tamanho_mb, taxa_kbps;
    int tamanho_kb;
    int tempo_total, horas, minutos, segundos;

    printf("Tamanho do arquivo [MB]: ");
    scanf("%d", &tamanho_mb);

    printf("Taxa de Transmissao [KB/s]: ");
    scanf("%d", &taxa_kbps);

    tamanho_kb = tamanho_mb * MB_TO_KB;
    tempo_total = tamanho_kb / taxa_kbps;

    horas = tempo_total / 3600;
    minutos = (tempo_total % 3600) / 60;
    segundos = tempo_total % 60;

    printf("Tempo Estimado: %d horas, %d minutos, %d segundos.", horas, minutos, segundos);
}