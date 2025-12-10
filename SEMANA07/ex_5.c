#include <stdio.h>
#include <conio.h>

void main()
{
    int num;
    
    printf("Informe um numero: ");
    scanf("%d", &num);
    
    int soma=0, valor = 1;
    
    while (soma+valor <= num)
    {
        printf("%d ", valor);
        soma = soma + valor;
        valor++;
    }
}