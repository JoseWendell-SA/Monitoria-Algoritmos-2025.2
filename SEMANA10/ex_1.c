/*
==================================================
PROBLEMA 1
==================================================
Escreva um programa que leia um número inteiro entre 0 e 255 e calcule o seu valor correspondente em binário.
*/

#include <stdio.h>
#include <conio.h>

const int TAM=8;

void main()
{
    int vet[TAM], num;
    
    printf("Informe um numero: ");
    scanf("%d", &num);
    
    int n;
    
    for (n = 0 ; n < TAM ; n++)
    {
        vet[n] = 0;
    }
    
    n=7;
    
    while (num != 1 && n>0)
    {
        vet[n] = num%2;
        num = num/2;
        n--;
    }
    
    vet[n] = num;
    
    printf("Convertendo o valor informado em binario eh:\n");
    
    for (n = 0 ; n < TAM ; n++)
    {
        printf("%d", vet[n]);
    }

    getch();
}
