/*
==================================================
PROBLEMA 8
==================================================
Alfredo tem um carro flex e sempre fica na dúvida se é melhor abastecê-lo com álcool ou gasolina. Um dia um de seus amigos o ensinou a seguinte dica: “Pegue o valor do preço da gasolina e multiplique por 0,7. Se o valor for menor ou igual ao valor do preço do álcool,
abasteça com gasolina. Caso contrário, abasteça com álcool.” Com base nestas informações, escreva um programa que leia o preço do litro da gasolina e do álcool e verifique se é melhor abastecer com álcool ou com gasolina.
*/

#include <stdio.h>
#include <stdlib.h>

const float FATOR = 0.7;

void main() {
    float preco_gasolina, preco_alcool;

    printf("Informe o preco da gasolina: ");
    scanf("%f", &preco_gasolina);

    printf("Informe o preco do alcool: ");
    scanf("%f", &preco_alcool);

    preco_gasolina *= FATOR;

    if (preco_gasolina < preco_alcool) {
        printf("Abasteca com gasolina!");
    } else {
        printf("Abasteca com alcool!");
    }
}