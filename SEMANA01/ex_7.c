/*
==================================================
PROBLEMA 2
==================================================
Em uma determinada cidade, cada m2 de um terreno está avaliado em R$ 300,00. Escreva
um programa que leia o comprimento e a largura de um terreno localizado nesta cidade e
calcule o seu valor de mercado.
*/

#include <stdio.h>

const float PRECO = 300;

void main()
{
    float comprimento, largura;
    printf("Informe o comprimento e a largura: ");
    scanf("%f%f", &comprimento, &largura);
    float area = comprimento * largura;
    float precoFinal = area * PRECO;
    printf("O preco do terreno eh: %.2f", precoFinal);
}