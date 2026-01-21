#include <stdio.h>
#include <conio.h>

const int TAM = 10;

int ContarNaparicoes(int vet[TAM], int N)
{
    int k, cont = 0;
    
    for (k = 0 ; k < TAM ; k++)
    {
        if (vet[k] == N)
        {
            cont = cont + 1;
        }
    }
    
    return cont;
}

void main()
{
    int num, vet[TAM], k;
    
    printf("Informe 10 numeros\n");
    
    for (k = 0 ; k < TAM ; k++)
    {
        printf("%d numero: ", k+1);
        scanf("%d", &vet[k]);
    }
    
    printf("\nInforma o numero que deseja contar: ");
    scanf("%d", &num);
    
    int result = ContarNaparicoes(vet, num);
    
    printf("O numero %d apareceu %d vezes", num, result);
    
    getch();
}