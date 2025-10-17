/*
==================================================
PROBLEMA 2
==================================================
Escreva um programa que leia o nome e a quantidade de votos recebidos por cada um dos
três candidatos a prefeito de uma cidade e calcule o percentual de votos recebidos por cada
candidato. Para resolver esse programa, considere que não houve votos brancos e nem
nulos.
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    char cand1[30];
    int canVotos1;
    
    char cand2[30];
    int canVotos2;
    
    char cand3[30];
    int canVotos3;
    
    char lerEnter;
    
    printf("Informe o nome do primeiro candidato e seu total de votos: ");
    gets(cand1);
    scanf("%d", &canVotos1);
    scanf("%c", &lerEnter);
    
    printf("Informe o nome do primeiro candidato e seu total de votos: ");
    gets(cand2);
    scanf("%d", &canVotos2);
    scanf("%c", &lerEnter);
    
    printf("Informe o nome do primeiro candidato e seu total de votos: ");
    gets(cand3);
    scanf("%d", &canVotos3);
    scanf("%c", &lerEnter);
    
    int totalDeVotos = canVotos1+canVotos2+canVotos3;
    float perc1, perc2, perc3;
    
    perc1 = (canVotos1*100)/totalDeVotos;
    perc2 = (canVotos2*100)/totalDeVotos;
    perc3 = (canVotos3*100)/totalDeVotos;
    
    printf("%s: %.2f%\n", cand1, perc1);
    printf("%s: %.2f%\n", cand2, perc2);
    printf("%s: %.2f%\n", cand3, perc3);
    
    getch();
}