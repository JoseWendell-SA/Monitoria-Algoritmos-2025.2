/*
==================================================
PROBLEMA 7
==================================================
A matemática prova que números inteiros podem ser representados de maneira única como um produto de potências de números primos distintos. Este produto é chamado de decomposição em fatores primos do número e os expoentes são chamados de multiplicidade do primo respectivo. Por exemplo, 360 = 23x32x5 e 21 = 3X7. Com base nessas informações, escreva um programa em pascal que obtenha a decomposição em fatores primos de um número inteiro positivo informado pelo usuário.
*/

#include <stdio.h>


int isPrimo(int num) {
    int totDivisores = 0;
    
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) totDivisores++; 
    }

    return totDivisores == 2 ? 1 : 0;
}

int proximoPrimo(int num) {
    int encontrouPrimo = 0;

    while (encontrouPrimo != 1) {
        num++;
        if (isPrimo(num) == 1) {
            encontrouPrimo = 1;
            break;
        };
    }

    return num;
}

void preencherArray(int *nums) {
    for (int i = 0; i < 3; i++) {
        printf("%d° número: ", i + 1);
        scanf("%d", &nums[i]);
    }
}

void imprimirArray(int nums[3]) {
    printf("[");
    for (int i = 0; i < 3; i++) {
        printf("%d ", nums[i]);
    }
    printf("]");
}

void main() {
    int num;
    int divisorPrimo = 2;

    printf("Informe o número: ");
    scanf("%d", &num);
    


    while(num > 1) {
        int isDivisor = 0;

        if (num % divisorPrimo == 0) {
            num /= divisorPrimo;
            isDivisor = 1;
        }

        if (isDivisor == 0) {
            divisorPrimo = proximoPrimo(divisorPrimo);
        } else {
            if (num > 1) {
                printf("%d x ", divisorPrimo);
            } else {
                printf("%d", divisorPrimo);
            }
        }
    }
}
