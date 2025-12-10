#include <stdio.h>
#include <conio.h>

void main()
{
    int N, k;
    printf("Informe um numero e a posicao de um algarismo: ");
    scanf("%d%d", &N, &k);
    
    int p;
    for (p = 1 ; p < k ; p++)
    {
        N = N/10;
    }
    
    N = N%10;
    
    printf("O algarismo da posicao informada eh: %d", N);
}
