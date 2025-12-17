/*
==================================================
PROBLEMA 3
==================================================
Escreva um programa que leia um texto digitado pelo usuário até ler o caractere enter,
que não deve ser processado. O programa deve imprimir quantas vezes cada letra foi
digitada. (lembre-se, os caracteres ‘a’ e ‘A’) representam uma única letra.
*/

#include <stdio.h>
#include <conio.h>

const int TAM=26;

void main()
{
    int vet[TAM];
    
    int n;
    for (n = 0 ; n < TAM ; n++)
    {
        vet[n] = 0;
    }
    
    char letra_a = 'a'; //Possui o valor 97
    char letra_A = 'A'; //Possui o valor 65
    
    int diferenca = letra_a - letra_A; //Resultado é 32
    
    char letra;
    
    printf("Informe um texto: ");
    scanf("%c", &letra);
    
    while (letra != '\n')
    {
        if (letra < letra_a)
        {
            letra = letra + diferenca;
        }
        
        letra = letra % letra_a;
        
        if (letra < TAM)
        {
            vet[letra] = vet[letra] + 1;
        }
        
        scanf("%c", &letra);
    }
    
    for (n = 0 ; n < TAM ; n++)
    {
        printf("%c: %d\n", (n+letra_A), vet[n]);
    }
    
    getch();
}
