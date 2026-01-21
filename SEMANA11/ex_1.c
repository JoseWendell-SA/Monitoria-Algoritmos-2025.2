#include <stdio.h>
#include <conio.h>

const int TOTAL=5;

float Kelvin(float cel)
{
    float kel = cel + 273.15;
    
    return kel;
}

float Fahrenheit(float cel)
{
    float fah = (cel * 9 / 5) + 32;
    
    return fah;
}

void main()
{
    int n;
    float num;
    
    printf("Informe %d numeros\n", TOTAL);
    
    for (n = 1 ; n <= TOTAL ; n++)
    {
        printf("Informe o %d numero: ", n);
        scanf("%f", &num);
        
        float kelv = Kelvin(num);
        float fahren = Fahrenheit(num);
        
        printf("Convertendo para Kelvin eh: %.2f\nFahrenheit eh: %.2f\n", kelv, fahren);
    }
    
    getch();
}