#include <stdio.h>
#include <conio.h>

void main()
{
    int n;
    
    printf("Informe o tamanho da arvore: ");
    scanf("%d", &n);
    
    int i, j;
    
    for (i = n ; i > 0 ; i--)
    {
        for (j = i ; j > 0 ; j--)
        {
            printf("*");
        }
        
        printf("\n");
    }
    
    getch();
}