/*
==================================================
PROBLEMA 2
==================================================
Escreva um programa que leia vários itens de uma compra feita pelo usuário. Para cada item, o usuário deve informar o seu nome, o seu preço unitário e a quantidade comprada. Após cada leitura, o programa deve perguntar ao usuário se ele deseja adicionar um novo item ou fechar a conta. O programa deve considerar que o usuário irá digitar pelo menos um item. Após terminar a leitura, o programa deve mostrar o valor da conta à vista e o valor da conta a prazo. O valor da conta a prazo corresponde à soma do valor total de cada item digitado pelo usuário. O valor da conta à vista corresponde ao valor da conta a prazo com um desconto de 15%.
*/

#include <stdio.h>

// nome[strcspn(nome, "\n")] = '\0';

void main() {
    char nomeProduto[50];
    char desejaContinuarComprando;
    float precoUnitario, valorTotal = 0;
    int quantidadeItem;

    do {
        // input dos dados
        printf("Nome do produto: ");
        fgets(nomeProduto, sizeof(nomeProduto), stdin);
        nomeProduto[strcspn(nomeProduto, "\n")] = '\0';

        printf("Preco unitario do %s: ", nomeProduto);
        scanf("%f", &precoUnitario);
        getchar();

        printf("Quantidade de %s: ", nomeProduto);
        scanf("%d", &quantidadeItem);
        getchar();

        valorTotal += quantidadeItem * precoUnitario;
        printf("%d x %s = %.2f\n", quantidadeItem, nomeProduto, quantidadeItem * precoUnitario);

        printf("Deseja continuar comprando? [S, N]: ");
        scanf("%c", &desejaContinuarComprando);
        getchar();
    } while (desejaContinuarComprando == 'S');

    float valorCompraPrazo = valorTotal;
    float valorCompraVista = valorCompraPrazo * 0.85;

    printf("\n==================================\n");
    printf("Valor da compra [A PRAZO]: R$%.2f\n", valorCompraPrazo);
    printf("Valor da compra [A VISTA]: R$%.2f", valorCompraVista);
}
