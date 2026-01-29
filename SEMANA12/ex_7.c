#include <stdio.h>
#include <conio.h>

const int TAM=5;

void Ler(int vet[TAM])
{
    int n = 0;
    
    printf("Preencha o vetor:\n");
    for (n = 0 ; n < TAM ; n++)
    {
        printf("Posicao %d: ", n+1);
        scanf("%d", &vet[n]);
    }
}

void Intercalar(int vet1[TAM], int vet2[TAM], int vetC[TAM*2])
{
    int a = 0, b = 0;
    
    while (a < TAM || b < TAM)
    {
        if (a < TAM && b < TAM)
        {
            if (vet1[a] < vet2[b])
            {
                vetC[a+b] = vet1[a];
                a = a + 1;
            }
            
            else
            {
                vetC[a+b] = vet2[b];
                b = b + 1;
            }
        }
        
        else if (a < TAM)
        {
            vetC[a+b] = vet1[a];
            a = a + 1;
        }
            
        else
        {
            vetC[a+b] = vet2[b];
            b = b + 1;
        }
    }
}

void Exibir(int vetC[TAM*2])
{
    int n = 0;
    
    printf("O vetor apos intercalar: ");
    for (n = 0 ; n < TAM*2 ; n++)
    {
        printf("%d ", vetC[n]);
    }
}

void main()
{
    int vet1[TAM], vet2[TAM], vetC[TAM*2];
    Ler(vet1);
    Ler(vet2);
    Intercalar(vet1, vet2, vetC);
    
    Exibir(vetC);
    
    getch();
}