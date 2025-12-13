#include <stdio.h>


void main() {
    int termoInicial, razao, num;

    printf("Informe o termo inicial e a razão [SEPARADOS POR ESPAÇO]: ");
    scanf("%d %d", &termoInicial, &razao);

    printf("Informe o número: ");
    scanf("%d", &num);


    int proxElemento = termoInicial;
    int numPertence = 0;

    while (proxElemento <= num) {
        if (proxElemento == num) numPertence = 1;
        
        proxElemento += razao;
    }

    if (numPertence) {
        printf("%d pertence a PA!", num);
    } else {
        printf("%d NÃO pertence a PA!", num);
    }
}