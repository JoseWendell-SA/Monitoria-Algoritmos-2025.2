/*
==================================================
PROBLEMA 2
==================================================
Escreva um programa que leia um número inteiro e informe o seu antecessor e o seu
sucessor.
*/

#include <stdio.h>

void main()
{
    int num;
    printf("Informe um numero: ");
    scanf("%d", &num);
    int ant = num-1;
    int suc = num+1;
    
    printf("O antecessor eh: %d\n", ant);
    printf("O antecessor eh: %d", suc);
}