#include <stdio.h>
#include <conio.h>

int const TAM=10;

void Preencher(int vetor[TAM])
{
    int n;
    
    printf("Preencha o vetor:\n");
    for (n = 0 ; n < TAM ; n++)
    {
        printf("Posicao %d: ", n+1);
        scanf("%d", &vetor[n]);
    }
}

void Imprimir(int vetor[TAM])
{
    int n;
    
    printf("O vetor informado eh: ");
    for (n = 0 ; n < TAM ; n++)
    {
        printf("%d ", vetor[n]);
    }
}

void main()
{
    int vetor[TAM];
    Preencher(vetor);
    Imprimir(vetor);
    
    getch();
}