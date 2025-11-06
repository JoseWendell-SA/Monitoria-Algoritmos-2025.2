#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    char palavra[20];
    
    printf("Informe um verbo no infinitivo: ");
    gets(palavra);
    
    int tamanho = strlen(palavra);
    
    char infinitivo = palavra[tamanho-2];

    palavra[tamanho-2] = '\0';
    
    if (infinitivo == 'a')
    {
        printf("\nEu %so", palavra);
        printf("\nTu %sas", palavra);
        printf("\nEle %sa", palavra);
        printf("\nNos %samos", palavra);
        printf("\nVos %sais", palavra);
        printf("\nEles %sam", palavra);
    }
    
    else if (infinitivo == 'e')
    {
        printf("\nEu %so", palavra);
        printf("\nTu %ses", palavra);
        printf("\nEle %se", palavra);
        printf("\nNos %semos", palavra);
        printf("\nVos %seis", palavra);
        printf("\nEles %sem", palavra);
    }
    
    else if (infinitivo == 'i')
    {
        printf("\nEu %so", palavra);
        printf("\nTu %ses", palavra);
        printf("\nEle %se", palavra);
        printf("\nNos %simos", palavra);
        printf("\nVos %sis", palavra);
        printf("\nEles %sem", palavra);
    }
    
    getch();
}
