#include <stdio.h>
#include <conio.h>

void main()
{
    int num;
    
    printf("Informe um numero: ");
    scanf("%d", &num);
    
    int fib1=1, fib2=1, pos=1;
    
    while (fib1 <= num)
    {
        fib2 = fib2+fib1;
        fib1 = fib2-fib1;
        
        pos++;
    }
    
    printf("O primeiro numero da sequencia de fibonacci maior do que %d eh %d da posicao %d", num, fib1, pos);
}
