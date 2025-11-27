#include <stdio.h>
#include <conio.h>

void main()
{
    int num;
    
    printf("Informe um numero entre 1000 e 9999: ");
    scanf("%d", &num);
    
    int milhar, centena, dezena, unidade;
    
    milhar = num / 1000;
    num = num % 1000;
    
    centena = num / 100;
    num = num % 100;
    
    dezena = num / 10;
    unidade = num % 10;
    
    if (milhar == unidade && dezena == centena)
    {
        printf("Eh palindromo");
    }
    
    else
    {
        printf("Nao eh palindromo");
    }
    
    getch();
}
