#include <stdio.h>
#include <conio.h>

const int TOTALPESSOAS=10;

void main()
{
    float peso, altura;
    int abaixo=0, acima=0, adequado=0, n;
    
    for (n = 1 ; n <= TOTALPESSOAS ; n++)
    {
        printf("Informe a altura e peso da %d pessoa: ", n);
        scanf("%f %f", &altura, &peso);
        
        float imc = peso/(altura*altura);
        
        if (imc < 18.5)
        {
            abaixo = abaixo + 1;
        }
        
        else if (imc > 25)
        {
            acima = acima + 1;
        }
        
        else
        {
            adequado = adequado + 1;
        }
    }
    
    float abaixoPerc = (abaixo*100)/TOTALPESSOAS;
    float acimaPerc = (acima*100)/TOTALPESSOAS;
    float adequadoPerc = (adequado*100)/TOTALPESSOAS;
    
    printf("Abaixo do peso: %.2f%\n", abaixoPerc);
    printf("Adequado: %.2f%\n", adequadoPerc);
    printf("Acima do peso %.2f%", acimaPerc);

    getch();
}