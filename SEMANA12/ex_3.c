#include <stdio.h>
#include <conio.h>

void Coluna(int k, int tam)
{
    int i;
    
    for (i = k ; i < tam ; i++)
    {
        printf("*");
    }
}

void Linha(int tam)
{
    int k;
    
    for (k = 0 ; k < tam ; k++)
    {
        Coluna(k, tam);
        printf("\n");
    }
}

void main()
{
    int N;
    
    printf("Informe o tamanho da arvore: ");
    scanf("%d", &N);
    
    Linha(N);
    
    getch();
}