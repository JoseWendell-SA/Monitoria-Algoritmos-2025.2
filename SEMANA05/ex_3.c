#include <stdio.h>
#include <conio.h>

void main()
{
    int m, n;
    
    printf("Informe os numeros M e N: ");
    scanf("%d%d", &m, &n);
    
    int i, soma = 0;
    
    for (i = m ; i <= n ; i++)
    {
        soma = soma + i;
    }
    
    printf("Soma de todos os numeros entre %d e %d eh: %d", m, n, soma);
    
    getch();
}
