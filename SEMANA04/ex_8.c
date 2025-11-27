/*
==================================================
PROBLEMA 8
==================================================
Escreva um programa que leia as horas, os minutos e o fuso horário e converta o horário lido para o fuso horário informado. O fuso horário deve ser informado como um número inteiro. Caso o valor seja positivo, o programa deve considerar que o fuso horário digitado
é maior do que o atual. Caso o valor seja negativo, o programa deve considerar que o fuso horário é menor do que o atual. Caso o valor seja 0, o programa deve considerar que o fuso horário é o mesmo do atual. A resposta do programa deve ser dada no formato hh:mm hs.
Por exemplo, se o horário lido foi 10 h e 30 min e o fuso horário for 4, a resposta do programa deve ser 14:30 hs. Por outro lado, se o horário lido foi 10 h e30 min e o fuso horário for -4, a resposta do programa deve ser 06:30 hs. Se o horário lido for 22 h e 30 min
e o fuso-horário for 3, a resposta deve ser 01:30 hs. Se o horário lido for 2 h e 30 min e o fuso horário for -3, a resposta deve ser 23:30 hs. O horário referente à meia-noite deve ser representado da forma 00:00 hs.
*/

#include <stdio.h>

/*
horas / 24 = 1 dia 3 hrs
horas % 24 = 3
*/

void main() {
    int horas, minutos, fuso;

    printf("Informe a hora, minutos e fuso [SEPARADOS POR ESPACO]: ");
    scanf("%d%d%d", &horas, &minutos, &fuso);

    horas += fuso;
    // printf("%d:%d hs", horas, minutos);
    
    // hora = 01 - 2 = -1
    // 23 hrs, fuso 2 -> 25 -> 24 hrs + 1 hr hora % 24 = 1 hr, fuso - 2 -> 

    // hora 22, fuso 2 = 24 == 24 % 24 == 0

    if (horas >= 24) {
        horas = horas % 24;
    } else if (horas < 0) {
        horas = 24 + horas;
    }
    
    printf("%.2d:%.2d hs", horas, minutos);
}
