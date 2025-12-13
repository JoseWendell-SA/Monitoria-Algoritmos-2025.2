/*
==================================================
PROBLEMA 4
==================================================
(OPI -2013) Um escritório de informática possui um corredor bem amplo com N salas. Em
um certo final de semana, o vigia resolveu tomar cachaça e brincar de abrir e fechar as
portas das salas para passar o tempo. Na primeira rodada, ele abriu todas as portas das
salas. Na segunda rodada, ele fechou as portas de todas as salas com números pare. Na
terceira rodada, ele visitou todas as salas cujo número era um múltiplo de 3. Se a porta da
sala estivesse aberta, ele a fechava. Se a porta da sala estivesse fechada, ele a abria. Ele
repetiu esta brincadeira até a N-ésima rodada. Com base nessas informações, escreva um
programa que leia o número de portas existentes no escritório e identifique quantas
portas ficaram abertas após o vigia desmaiar. Seguem alguns casos de teste:
*/

#include <stdio.h>

/*
[0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
regra -> se aberta = fecha, senão abre
1 rodada = [0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1] -> multiplos 1
2 rodada = [0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1] = 8 abertas -> multiplos de 2
3 rodada = [0, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0] = 7 abertas -> multiplos 3
4 rodada = [0, 1, 0, 0, 1, 1, 1, 1, 1, 0, 0, 1, 0, 1, 0, 0] = 8 abertas -> 
5 rodada = [0, 1, 0, 0, 1, 0, 1, 1, 1, 0, 1, 1, 0, 1, 0, 1] = 9 abertas
6 rodada = [0, 1, 0, 0, 1, 0, 0, 1, 1, 0, 1, 1, 1, 1, 0, 1] = 9 abertas
7 rodada = [0, 1, 0, 0, 1, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1] = 9 abertas
8 rodada = [0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1] = 8 abertas
9 rodada = [0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1] = 9 abertas
10 rodada = [0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1] = 9 abertas

*/

void main() {
    int totSalas, portasAbertas = 0;

    printf("Número de salas: ");
    scanf("%d", &totSalas);

    int portas[totSalas + 1];

    for (int pos = 1; pos <= totSalas; pos++) {
        portas[pos] = 0;
    }

    for (int mult = 1; mult <= totSalas; mult++) {
        // mult = 2
        for (int idx = mult; idx <= totSalas; idx += mult) {
            // if (portas[idx] == 1) {
            //     portas[idx] = 0;
            // } else {
            //     portas[idx] = 1;
            // }
            // portas[idx] = portas[idx] == 1 ? 0 : 1;
            portas[idx] = !portas[idx];
        } // idx = 2, 2 + 2 = 4
    }

    for (int idx = 0; idx <= totSalas; idx++) {
        if (portas[idx] == 1) portasAbertas++;
    }

    printf("Portas Abertas: %d", portasAbertas);
}
