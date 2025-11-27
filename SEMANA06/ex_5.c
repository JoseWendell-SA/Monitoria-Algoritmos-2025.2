#include <stdio.h>
#include <conio.h>

void main()
{
    int n=0;
    
    for (n = 1000 ; n <= 9999 ; n++)
    {
        int num = n;
        int milhar = num/1000;
        num = num % 1000;
        
        int centena = num/100;
        num = num % 100;
        
        int dezena = num/10;
        int unidade = num%10;
        
        if (unidade == milhar && centena == dezena)
        {
            printf("|%d|\n", n);
        }
    }

    getch();
}