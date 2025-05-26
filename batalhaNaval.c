#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    int tabuleiro[10][10];
    int navio1[4] = {2, 4, 5, 6};
    int navio2[4] = {5, 1, 2, 3};

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.
    int navio3[6] = {3, 4, 5, 1, 2, 3};
    int navio4[6] = {3, 4, 5, 9, 8, 7};
    


    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    int cone[3][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1}
    };

    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0
    int octa[3][3] = {
        {0, 1, 0},
        {1, 1, 1},
        {0, 1, 0},
    };

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0
    int cruz[3][5] = {
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0}
    };

    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            if(i == navio1[0] && j == navio2[0] && (i == navio2[1] || i == navio2[2] || i == navio2[3]) && (navio2[0] == navio1[1] || navio2[0] == navio1[2] || navio2[0] == navio1[3]) && (navio1[0] == navio2[1] || navio1[0] == navio2[2] || navio1[0] == navio2[3])) tabuleiro[i][j] = 7;
            else if(i == navio1[0] && j >= navio1[1] && j <= navio1[3]) tabuleiro[i][j] = 3;
            else if(j == navio2[0] && i >= navio2[1] && i <= navio2[3]) tabuleiro[i][j] = 3;
            else if((i == navio3[0] && j == navio3[3]) || (i == navio3[1] && j == navio3[4]) || (i == navio3[2] && j == navio3[5])) tabuleiro[i][j] = 3;
            else if((i == navio4[0] && j == navio4[3]) || (i == navio4[1] && j == navio4[4]) || (i == navio4[2] && j == navio4[5])) tabuleiro[i][j] = 3;
            else if(i >= 6 && i <= 8 && j >= 0 & j <= 4) tabuleiro[i][j] = cone[i-6][j];
            else if(i >= 0 && i <= 2 && j >= 0 & j <= 2) tabuleiro[i][j] = octa[i][j];
            else if(i >= 6 && i <= 8 && j >= 5 & j <= 9) tabuleiro[i][j] = cruz[i-6][j-5];
            else tabuleiro[i][j] = 0;
        }
    }

    printf("     A  B  C  D  E  F  G  H  I  J \n");
    for(int i = 0; i < 10; i++) {
        printf("%2d  ", i + 1);
        for(int j = 0; j < 10; j++) {
        //    printf(" t ");
            printf(" %d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    getchar();

    return 0;
}