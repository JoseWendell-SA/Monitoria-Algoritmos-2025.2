#include <stdio.h>
#include <conio.h>
#include <string.h>

const int TAM=50;

int ContarLetras(char vet[TAM])
{
    int n=0, cont=0;
    
    while (vet[n] != '\0')
    {
        if ((vet[n] >= 'A' && vet[n] <= 'Z') || (vet[n] >= 'a' && vet[n] <= 'z'))
        {
            cont = cont + 1;
        }
        
        n++;
    }
    
    return cont;
}

void main()
{
    char palavra[TAM];
    printf("Digite um texto: ");
    gets(palavra);
    
    int totalLetras = ContarLetras(palavra);
    
    printf("\nO texto que voce informou possui %d de letras", totalLetras);

    getch();
}