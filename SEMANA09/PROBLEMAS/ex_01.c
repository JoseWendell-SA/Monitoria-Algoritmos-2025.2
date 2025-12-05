
#include <stdio.h>


void main() {
    int num, primosEncontrados = 0, possivelPrimo = 1;

    printf("Informe o número: ");
    scanf("%d", &num);

    while (primosEncontrados < num) {
        possivelPrimo++;
        int totDivisores = 0;

        for (int c = 1; c <= possivelPrimo; c++) {
            if (possivelPrimo % c == 0) totDivisores++;
        }

        if (totDivisores == 2) {
            primosEncontrados++;
        }
    }
    
    printf("%d é o enésimo número primo!", possivelPrimo);
}