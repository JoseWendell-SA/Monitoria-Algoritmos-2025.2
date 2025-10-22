#include <stdio.h>
#include <conio.h>

void main()
{
    int num;
    printf("Informe um numero: ");
    scanf("%d", &num);
    
    if (num < 0)
        num = num * (-1);
    
    printf("O valor absoluto eh: %d", num);
    
    getch();
}