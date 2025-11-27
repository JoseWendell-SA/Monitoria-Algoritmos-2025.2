#include <stdio.h>
#include <conio.h>

void main()
{
    int M, N;
    printf("Informe os valores de M e N: ");
    scanf("%d%d", &M, &N);
    
    int x, y;
    
    for (x = M ; x < N ; x++)
    {
        for (y = x ; y <= N ; y++)
        {
            printf("(%d,%d), ", x, y);
        }
    }
    
    getch();
}