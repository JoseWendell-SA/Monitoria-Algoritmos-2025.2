/*
==================================================
PROBLEMA 7
==================================================
Escreva um programa que leia uma matriz quadrada de ordem 5 de números inteiros e um
inteiro N e verifique em quantas linhas e colunas diferentes o número N aparece dentro da
matriz.
*/

#include <stdio.h>
#include <conio.h>

const int ORDEM=5;

void main()
{
    int mat[ORDEM][ORDEM];
    
    int l, c, contLinha=0, contColuna=0, num;
    
    for (l = 0 ; l < ORDEM ; l++)
    {
        for (c = 0 ; c < ORDEM ; c++)
        {
            printf("Informe o numero da posicao %d %d: ", l, c);
            scanf("%d", &mat[l][c]);
        }
    }
    
    printf("Informe o numero que deseja buscar: ");
    scanf("%d", &num);
    
    for (l = 0 ; l < ORDEM ; l++)
    {
        int check=0;
        
        for (c = 0 ; c < ORDEM ; c++)
        {
            if (mat[l][c] == num)
            {
                check = 1;
            }
        }
        
        if (check == 1)
        {
            contLinha = contLinha+1;
        }
    }
    
    for (c = 0 ; c < ORDEM ; c++)
    {
        int check=0;
        
        for (l = 0 ; l < ORDEM ; l++)
        {
            if (mat[l][c] == num)
            {
                check = 1;
            }
        }
        
        if (check == 1)
        {
            contColuna = contColuna + 1;
        }
    }
    
    printf("O %d aparece em %d linhas e %d colunas", num, contLinha, contColuna);
    
    getch();
}
