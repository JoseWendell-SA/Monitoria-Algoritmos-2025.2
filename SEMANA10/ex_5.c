/*
==================================================
PROBLEMA 5
==================================================
Escreva um programa que leia dois vetores de três números reais cada e calcule o valor
absoluto cosseno do ângulo formado pelos dois vetores. O cosseno do ângulo formado por
dois vetores u = (x1, x2, ..., xN) e v = (y1, y2, ..., yN) é calculado através da seguinte fórmula:
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

const int TAM=3;

void main()
{
    float vetX[TAM];
    float vetY[TAM];
    
    int n;
    
    printf("Informe os valores de:\n");
    for (n = 0 ; n < TAM ; n++)
    {
        printf("X%d: ", (n+1));
        scanf("%f", &vetX[n]);
        
        printf("Y%d: ", (n+1));
        scanf("%f", &vetY[n]);
    }
    
    float resultUV = 0;
    float somaX = 0;
    float somaY = 0;
    
    //Calcula o resultado de u * v
    for (n = 0 ; n < TAM ; n++)
    {
        float multUV = vetX[n] * vetY[n];
        resultUV = resultUV + multUV;
    }
    
    //Calcula |u| e |v|
    for (n = 0 ; n < TAM ; n++)
    {
        somaX = somaX + pow(vetX[n], 2);
        somaY = somaY + pow(vetY[n], 2);
    }
    
    float raizX = sqrt(somaX);
    float raizY = sqrt(somaY);
    
    float resultadoFinal = resultUV/(raizX*raizY);
    
    printf("O valor absoluto cosseno do angulo eh: %.2f", resultadoFinal);

    getch();
}
