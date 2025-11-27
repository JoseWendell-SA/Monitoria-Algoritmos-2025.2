/*
==================================================
PROBLEMA 4
==================================================
Escreva um programa que leia três números inteiros positivos e calcule o mínimo múltiplo comum dos números informados.
*/

#include <stdio.h>

/*
360 | 2
180 | 2
90  | 2
45  | 3
15  | 3
5   | 5
1   |------------------
    | 2^3 x 3^2 x 5


6, 8, 9 | 2
3, 4, 9 | 2
3, 2, 9 | 2
3, 1, 9 | 3
1, 1, 3 | 3
1, 1, 1

*/

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
    int nums[3];
    int mmc = 1;
    int divisorPrimo = 2;

    preencherArray(nums);
    


    while(nums[0] > 1 || nums[1] > 1 || nums[2] > 1) {
        int isDivisor = 0;

        if (nums[0] % divisorPrimo == 0) {
            nums[0] /= divisorPrimo;
            isDivisor = 1;
        }

        if (nums[1] % divisorPrimo == 0) {
            nums[1] /= divisorPrimo;
            isDivisor = 1;
        }

        if (nums[2] % divisorPrimo == 0) {
            nums[2] /= divisorPrimo;
            isDivisor = 1;
        }

        if (isDivisor == 0) {
            divisorPrimo = proximoPrimo(divisorPrimo);
        } else {
            mmc *= divisorPrimo;
        }
    }

    printf("O MMC é: %d", mmc);
}