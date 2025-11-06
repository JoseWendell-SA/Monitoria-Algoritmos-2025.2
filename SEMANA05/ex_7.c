#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    char texto[50];
    printf("Informe um texto: ");
    gets(texto);
    
    int maiusculas = 0, minusculas = 0, numeros = 0, restante = 0;
    int i, tamanho = strlen(texto);
    
    for (i = 0 ; i < tamanho ; i++)
    {
        if (texto[i] >= 'A' && texto[i] <= 'Z')
        {
            maiusculas = maiusculas + 1;
        }
        
        else if (texto[i] >= 'a' && texto[i] <= 'z')
        {
            minusculas = minusculas + 1;
        }
        
        else if (texto[i] >= '0' && texto[i] <= '9')
        {
            numeros = numeros + 1;
        }
        
        else if (texto[i] != ' ')
        {
            restante = restante + 1;
        }
    }
    
    printf("\nMaiusculas: %d\nMinusculas: %d\nNumeros: %d\nDemais: %d", maiusculas, minusculas, numeros, restante);
    
    getch();
}
