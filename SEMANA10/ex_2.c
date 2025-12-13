/*
==================================================
PROBLEMA 2
==================================================
O IFPB precisa de um programa que faça a correção automática das provas do seu teste
de seleção. A prova, que é a mesma para todos os alunos, consiste de dez questões
objetivas, cuja resposta deve ser (a, b, c, d ou e). O programa deve ler o gabarito da prova
e, a seguir, o nome de um candidato e as opções que aparecem no seu cartão de respostas.
Para cada candidato, o programa deve imprimir o seu percentual de acertos. O
processamento deve ser encerrado quando for encontrado um candidato com o nome
 ́fim’, que não deve ser processado. O programa deve imprimir também a pontuação
média dos candidatos.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

const int TOTAL_QUESTOES = 10;

void clear() {
    while (getchar() != '\n');
}

void toLowerCase(char string[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        string[i] = tolower(string[i]);
    }
}

// FIM, Fim

void main() {
    char gabarito[TOTAL_QUESTOES];
    char nome[100];
    char respostas[TOTAL_QUESTOES];
    int totCandidatos = 0;
    float percentualAcertos = 0;

    printf("Informe o gabarito das questões:\n");
    for (int c = 0; c < TOTAL_QUESTOES; c++) {
        printf("%dª questão: ", c+1);
        scanf("%c", &gabarito[c]);
        clear();
    }

    printf("%d", strcasecmp(nome, "fim") != 0);
    printf("Nome do candidato: ");
    scanf("%s", nome);
    clear();

    while (strcasecmp(nome, "fim") != 0) {
        printf("Respostas do candidato '%s': \n", nome);
        for (int c = 0; c < TOTAL_QUESTOES; c++)
        {
            printf("%dª questão: ", c+1);
            scanf("%c", &respostas[c]);
            clear();
        }

        int acertos = 0;
        for (int questao = 0; questao < TOTAL_QUESTOES; questao++) {
            if (respostas[questao] == gabarito[questao]) acertos++;
        }

        float percentual = acertos * 10.0;
        printf("%s: %.1f%%\n", nome, percentual);

        totCandidatos++;
        percentualAcertos += percentual;

        printf("%d", strcasecmp(nome, "fim") != 0);
        printf("Nome do candidato: ");
        scanf("%s", nome);
        clear();
    }

    if (totCandidatos > 0) {
        float media = percentualAcertos / totCandidatos;
        printf("\nPontuação média dos candidatos: %.2f%%\n", media);
    } else {
        printf("\nNenhum candidato processado.\n");
    }
}

// percentual geral = soma dos percent / totCandidatos


// void main() {
//     char nome[100];

//     // do {
//     //     printf("Nome do candidato: ");
//     //     scanf("%s", &nome);

//     //     if (strcmp(nome, "fim") != 0) break;

//     //     printf("INSTRUÇÕES A EXECUTAR...");
//     // }
    
//     printf("Nome do usuário: ");
//     scanf("%s", &nome);

//     while (strcmp(nome, "fim") != 0) {
//         // Instruções


//         printf("Nome do usuário: ");
//         scanf("%s", &nome);
//     }
// }