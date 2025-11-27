#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    char texto[50];
    
    printf("Informe um texto: ");
    gets(texto);
    
    char letra;
    
    printf("informe um caractere: ");
    scanf("%c", &letra);
    
    int tamanho = strlen(texto);
    int i, cont = 0;
    
    for (i = 0 ; i < tamanho ; i++)
    {
        if (texto[i] == letra)
        {
            cont = cont + 1;
        }
    }
    
    printf("O caractere %c informado pelo usuario apareceu %d vezes", letra, cont);
    
    getch();
}
