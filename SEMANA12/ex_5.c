#include <stdio.h>
#include <conio.h>

const int TAM=5;

void Ler(int vet[TAM])
{
    int n;
    
    printf("Preencha o vetor:\n");
    for (n = 0 ; n < TAM ; n++)
    {
        printf("Informe o %d valor: ", n+1);
        scanf("%d", &vet[n]);
    }
}

void Cocatenar(int vetA[TAM], int vetB[TAM], int vetC[TAM*2])
{
    int n;
    
    for (n = 0 ; n < TAM ; n++)
    {
        vetC[n] = vetA[n];
    }
    
    for (n = 0 ; n < TAM ; n++)
    {
        vetC[n+TAM] = vetB[n];
    }
}

void Exibir(int vet[TAM*2])
{
    int n;
    
    printf("O vetor apos a uniao: ");
    for (n = 0 ; n < TAM*2 ; n++)
    {
        printf("%d ", vet[n]);
    }
}

void main()
{
    int vetA[TAM], vetB[TAM], vetC[TAM*2];
    
    Ler(vetA);
    Ler(vetB);
    
    Cocatenar(vetA, vetB, vetC);
    
    Exibir(vetC);
    
    getch();
}