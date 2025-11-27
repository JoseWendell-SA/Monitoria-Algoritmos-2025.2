#include <stdio.h>
#include <conio.h>

void main()
{
    int x, y;
    
    printf("Informe os numeros X e Y: ");
    scanf("%d %d", &x, &y);
    
    if (y == (2*x)+1)
    {
        printf("Pertence a reta y=2x+1");
    }
    
    else
    {
        printf("Nao pertence a reta y=2x+1");
    }

    getch();
}
