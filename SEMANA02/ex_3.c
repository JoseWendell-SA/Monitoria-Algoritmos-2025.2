/*
==================================================
PROBLEMA 2
==================================================
Escreva um programa que leia o número total de questões existentes em uma prova e o
número de questões que um candidato acertou e determine o seu percentual de acertos e
o seu percentual de erros.
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int totalQuestoes, acertos;
    printf("Informe o numero total de questoes e acertos: ");
    scanf("%d %d", &totalQuestoes, &acertos);
    float percAcertos = (acertos*100)/totalQuestoes;
    float percErros = 100 - percAcertos;
    printf("Percentual de Acertos eh: %.2f\nPercentual de Erros eh: %.2f", percAcertos, percErros);
    getch();
}