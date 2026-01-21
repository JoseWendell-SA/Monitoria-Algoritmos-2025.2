#include <stdio.h>
#include <conio.h>

const int ORDEM = 4;

int ContarLinhasNulas(float mat[ORDEM][ORDEM])
{
    int cont=0, l, c;
    
    for (l = 0 ; l < ORDEM ; l++)
    {
        int ehNula = 1;
        
        for (c = 0 ; c < ORDEM ; c++)
        {
            if (mat[l][c] != 0)
            {
                ehNula = 0;
            }
        }
        
        if (ehNula == 1)
        {
            cont = cont + 1;
        }
    }
    
    return cont;
}

void main()
{
    float mat[ORDEM][ORDEM];
    int l, c;
    
    printf("Preencha a matriz: ");
    
    for (l = 0 ; l < ORDEM ; l++)
    {
        for (c = 0 ; c < ORDEM ; c++)
        {
            printf("%d %d: ", l, c);
            scanf("%f", &mat[l][c]);
        }
    }
    
    int totalLinhasNulas = ContarLinhasNulas(mat);
    
    printf("A matriz informada possui %d linhas nulas", totalLinhasNulas);
    
    getch();
}