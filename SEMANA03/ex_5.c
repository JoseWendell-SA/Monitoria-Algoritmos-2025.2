#include <stdio.h>
#include <conio.h>

void main()
{
    int x, y;
    
    printf("Informe as coordenadas x e y: ");
    scanf("%d%d", &x, &y);
    
    if (x > 0 && y > 0)
    {
        printf("Pertence ao primeiro quadrante");
    }
    
    else if (x < 0 && y > 0)
    {
        printf("Pertence ao segundo quadrante");
    }
    
    else if (x < 0 && y < 0)
    {
        printf("Pertence ao terceiro quadrante");
    }
    
    else if (x > 0 && y < 0)
    {
        printf("Pertence ao quarto quadrante");
    }
    
    else
    {
        printf("Nao pertence a nenhum quadrante");
    }
    
    getch();
}