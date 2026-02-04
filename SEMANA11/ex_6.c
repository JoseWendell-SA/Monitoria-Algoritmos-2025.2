#include <stdio.h>
#include <conio.h>

const int TAM=10;

float MediaDoVetor(int vet[TAM])
{
    int n;
    float soma = 0;
    
    for (n = 0 ; n < TAM ; n++)
    {
        soma = soma + vet[n];
    }
    
    float media = soma/TAM;
    
    return media;
}

int MaiorValor(int vet[TAM])
{
    int n, maiorNum = vet[0];
    
    for (n = 1 ; n < TAM ; n++)
    {
        if (vet[n] > maiorNum)
        {
            maiorNum = vet[n];
        }
    }
    
    return maiorNum;
}

int MenorValor(int vet[TAM])
{
    int n, menorNum = vet[0];
    
    for (n = 1 ; n < TAM ; n++)
    {
        if (vet[n] < menorNum)
        {
            menorNum = vet[n];
        }
    }
    
    return menorNum;
}

int PosicaoMaiorValor(int vet[TAM])
{
    int n, maiorPos = 0;
    
    for (n = 1 ; n < TAM ; n++)
    {
        if (vet[n] > vet[maiorPos])
        {
            maiorPos = n;
        }
    }
    
    return maiorPos;
}

int PosicaoMenorValor(int vet[TAM])
{
    int n, menorPos = 0;
    
    for (n = 1 ; n < TAM ; n++)
    {
        if (vet[n] < vet[menorPos])
        {
            menorPos = n;
        }
    }
    
    return menorPos;
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
    
    float media = MediaDoVetor(vet);
    int maiorNum = MaiorValor(vet);
    int menorNum = MenorValor(vet);
    int maiorPos = PosicaoMaiorValor(vet);
    int menorPos = PosicaoMenorValor(vet);
    
    printf("Media: %.2f\nMaior numero: %d\nMenor numero: %d\nPosicao do maior numero: %d\nPosicao do menor numero: %d", media, maiorNum, menorNum, maiorPos, menorPos);
    
    
    getch();
}