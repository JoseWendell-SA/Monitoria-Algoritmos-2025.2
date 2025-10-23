/*
==================================================
PROBLEMA 8
==================================================
Escreva um programa que leia os dois últimos valores da leitura de um medidor de energia em KWh e calcule o valor da conta de energia, considerando que: o preço de 1 KWh é R$0,35, o valor da ICMS corresponde à 17% do valor do consumo e a taxa de iluminação pública é de R$ 15,00.
*/


#include <stdio.h>
#include <stdlib.h>

const float PRECO_KWH = 0.35;
const float ICMS_PERCENTUAL = 0.17;
const float TAXA_ILUMINACAO_PUBLICA = 15.00;

void main() {
    float leitura_anterior, leitura_atual;

    printf("Informe o valor da leitura anterior em KWh: ");
    scanf("%f", &leitura_anterior);

    printf("Informe o valor da leitura atual em KWh: ");
    scanf("%f", &leitura_atual);

    float consumo = leitura_atual - leitura_anterior;
    float valor_consumo = consumo * PRECO_KWH;
    float icms = valor_consumo * ICMS_PERCENTUAL;
    float valor_total = valor_consumo + icms + TAXA_ILUMINACAO_PUBLICA;

    printf("Valor da conta de energia: R$ %.2f", valor_total);
}