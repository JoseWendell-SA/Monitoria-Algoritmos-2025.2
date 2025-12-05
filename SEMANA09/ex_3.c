/*
==================================================
PROBLEMA 3
==================================================
Escreva um programa que leia um vetor de 10 números inteiros e, após terminar a leitura,
imprima todos os elementos do vetor que são maiores do que a média aritmética de todos
os elementos do vetor.
*/

#include <stdio.h>

const TAMANHO_VETOR = 10;


void inputVetor(int vetor[]) {
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        printf("%dº número: ", i + 1);
        scanf("%d", &vetor[i]);
    }
}

void printVetor(int vetor[]) {
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        printf("%d ", vetor[i]);
    }
}

int somaVetor(int vetor[]) {
    int soma = 0;

    for (int i = 0; i < TAMANHO_VETOR; i++) {
        soma += vetor[i];
    }

    return soma;
}

float mediaAritmeticaVetor(int vetor[]) {
    int soma = somaVetor(vetor);
    
    return soma / (float) TAMANHO_VETOR;
}

void main() {
    int nums[TAMANHO_VETOR];
    int soma = 0;
    
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        printf("%dº número: ", i + 1);
        scanf("%d", &nums[i]);

        soma += nums[i];
    }

    float mediaAritmetica = soma / (float) TAMANHO_VETOR;
    printf("Media aritmetica: %.1f\n", mediaAritmetica);

    printf("Números maiores que a média %.1f: ", mediaAritmetica);
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        const num = nums[i];
        
        if (num > mediaAritmetica) {
            printf("%d ", num);
        }
    }
}
