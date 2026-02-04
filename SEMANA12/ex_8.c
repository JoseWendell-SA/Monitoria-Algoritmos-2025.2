#include <stdio.h>
#include <conio.h>

const int TAM=10;

void Ordenar(int vet[TAM])
{
    int k, i, menorPos;
    
    for (k = 0 ; k < TAM ; k++)
    {
        menorPos = k;
        
        for (i = k+1 ; i < TAM ; i++)
        {
            if (vet[i] < vet[menorPos])
            {
                menorPos = i;
            }
        }
        
        int aux = vet[k];
        vet[k] = vet[menorPos];
        vet[menorPos] = aux;
    }
}

void main()
{
    int vet[TAM], n;
    
    printf("Preencha o vetor:\n");
    for (n = 0 ; n < TAM ; n++)
    {
        printf("%d numero: ", n+1);
        scanf("%d", &vet[n]);
    }
    
    Ordenar(vet);
    
    for (n = 0 ; n < TAM ; n++)
    {
        printf("%d ", vet[n]);
    }
    
    getch();
}