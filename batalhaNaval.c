#include <stdio.h>

int main() {

    // =========================
    // NÍVEL AVENTUREIRO
    // =========================

    int tabuleiro[10][10] = {0};

    // Navio horizontal
    for(int i = 0; i < 3; i++) {
        tabuleiro[1][i] = 3;
    }

    // Navio vertical
    for(int i = 0; i < 3; i++) {
        tabuleiro[i][5] = 3;
    }

    // Navio diagonal principal
    for(int i = 0; i < 3; i++) {
        tabuleiro[6 + i][1 + i] = 3;
    }

    // Navio diagonal secundária
    for(int i = 0; i < 3; i++) {
        tabuleiro[4 + i][8 - i] = 3;
    }

    printf("=== TABULEIRO BATALHA NAVAL ===\n\n");

    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    // =========================
    // NÍVEL MESTRE - CONE
    // =========================

    int cone[3][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1}
    };

    printf("\n\n=== HABILIDADE CONE ===\n\n");

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%d ", cone[i][j]);
        }
        printf("\n");
    }

    // =========================
    // NÍVEL MESTRE - CRUZ
    // =========================

    int cruz[3][5] = {
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0}
    };

    printf("\n\n=== HABILIDADE CRUZ ===\n\n");

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%d ", cruz[i][j]);
        }
        printf("\n");
    }

    // =========================
    // NÍVEL MESTRE - OCTAEDRO
    // =========================

    int octaedro[3][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };

    printf("\n\n=== HABILIDADE OCTAEDRO ===\n\n");

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%d ", octaedro[i][j]);
        }
        printf("\n");
    }

    return 0;
}