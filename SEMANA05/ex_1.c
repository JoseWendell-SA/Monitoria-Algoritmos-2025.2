#include <stdio.h>
#include <conio.h>

void main()
{
    int n;
    
    printf("Informe quantos numeros impares voce deseja imprimir: ");
    scanf("%d", &n);
    
    int i, num = 1;
    
    for (i = 0 ; i < n ; i++)
    {
        printf("%d ", num);
        num = num + 2;
    }
    
    getch();
}
