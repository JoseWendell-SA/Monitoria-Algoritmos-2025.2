/*
==================================================
PROBLEMA 9
==================================================
Escreva um programa que leia uma matriz quadrada de ordem 4 de números reais e
determine a quantidade de linhas nulas dessa matriz.
*/

#include <stdio.h>
#include <conio.h>

const int ORDEM=4;

void main()
{
    float mat[ORDEM][ORDEM];
    
    int l, c, contNulo=0;
    
    for (l = 0 ; l < ORDEM ; l++)
    {
        for (c = 0 ; c < ORDEM ; c++)
        {
            printf("Informe o numero da posicao %d %d: ", l, c);
            scanf("%f", &mat[l][c]);
        }
    }
    
    for (l = 0 ; l < ORDEM ; l++)
    {
        int check=0;
        
        for (c = 0 ; c < ORDEM ; c++)
        {
            if (mat[l][c] != 0)
            {
                check = 1;
            }
        }
        
        if (check==0)
        {
            contNulo = contNulo + 1;
        }
    }
    
    printf("A matriz possui %d linhas nulas", contNulo);
    
    getch();
}