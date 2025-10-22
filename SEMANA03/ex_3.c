#include <stdio.h>
#include <conio.h>

void main()
{
    int idade;
    printf("Informe a idade: ");
    scanf("%d", &idade);
    
    if (idade <= 12)
    {
        printf("Eh uma crianca");
    }
    
    else if (idade <= 17)
    {
        printf("Eh um adolescente");
    }
    
    else if (idade <= 59)
    {
        printf("Eh um adulto");
    }
    
    else
    {
        printf("Eh uma pessoa idosa");
    }
    
    getch();
}