#include <stdio.h>
#include <conio.h>

void main()
{
    int angulo1, angulo2, angulo3;
    
    printf("Informe os 3 angulos do triangulo: ");
    scanf("%d%d%d", &angulo1, &angulo2, &angulo3);
    
    if (angulo1 == 90 && (angulo2 + angulo3 == 90))
    {
        printf("Eh um triangulo retangulo");
    }
    
    else if (angulo2 == 90 && (angulo1 + angulo3 == 90))
    {
        printf("Eh um triangulo retangulo");
    }
    
    else if (angulo3 == 90 && (angulo1 + angulo2 == 90))
    {
        printf("Eh um triangulo retangulo");
    }
    
    else
    {
        printf("Nao eh um triangulo retangulo");
    }
    
    getch();
}