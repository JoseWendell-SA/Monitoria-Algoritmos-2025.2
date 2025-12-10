#include <stdio.h>
#include <conio.h>

void main()
{
    int num;
    int contPar=0, contImpar=0;
    printf("Informe um numero: ");
    scanf("%d", &num);
    
    float somaPar=0, somaImpar=0;
    
    while (num != 0)
    {
        if (num % 2 == 0)
        {
            somaPar = somaPar + num;
            contPar++;
        }
        
        else
        {
            somaImpar = somaImpar + num;
            contImpar++;
        }
        
        printf("Informe outro numero: ");
        scanf("%d", &num);
    }
    
    if (contPar != 0)
    {
        float mediaPar = somaPar/contPar;
        printf("A media dos numeros pares eh: %.2f\n", mediaPar);
    }
    
    if (contImpar != 0)
    {
        float mediaImpar = somaImpar/contImpar;
        printf("A media dos numeros impares eh: %.2f\n", mediaImpar);
    }
}
