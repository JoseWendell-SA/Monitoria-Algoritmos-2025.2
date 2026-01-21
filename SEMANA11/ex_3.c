#include <stdio.h>
#include <conio.h>

int MMC(int a, int b, int c)
{
    int divisor = 2, result = 1;
    
    while (a > 1 || b > 1 || c > 1)
    {
        int ehDivisivel = 0;
        
        if (a % divisor == 0)
        {
            a = a / divisor;
            ehDivisivel = 1;
        }
        
        if (b % divisor == 0)
        {
            b = b / divisor;
            ehDivisivel = 1;
        }
        
        if (c % divisor == 0)
        {
            c = c / divisor;
            ehDivisivel = 1;
        }
        
        if (ehDivisivel == 1)
        {
            result = result * divisor;
        }
        
        else
        {
            divisor = divisor + 1;
        }
    }
    
    return result;
}

void main()
{
    int nA, nB, nC;
    
    printf("Informe tres numeros: ");
    scanf("%d%d%d", &nA, &nB, &nC);
    
    int mmc = MMC(nA, nB, nC);
    printf("O mmc dos tres numeros informados eh: %d", mmc);

    getch();
}