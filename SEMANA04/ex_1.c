#include <stdio.h>
#include <conio.h>

void main()
{
    int numA, numB, numC;
    
    printf("Informe 3 numeros: ");
    scanf("%d%d%d", &numA, &numB, &numC);
    
    int meio;
    
    if ((numB > numA && numB < numC) || (numB < numA && numB > numC))
    {
        meio = numB;
    }
    
    else if ((numC > numA && numC < numB) || (numC < numA && numC > numB))
    {
        meio = numC;
    }
    
    else
    {
        meio = numA;
    }
    
    printf("O numero do meio eh: %d", meio);
    
    getch();
}
