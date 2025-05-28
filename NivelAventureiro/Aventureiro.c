#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0};

    // NAVIO 1 – Vertical (3 espaços), inicia em (1,2)
    for (int i = 0; i < 3; i++) {
        tabuleiro[1 + i][2] = 3;
    }

    // NAVIO 2 – Horizontal (4 espaços), inicia em (5,4)
    for (int j = 0; j < 4; j++) {
        tabuleiro[5][4 + j] = 3;
    }

    // NAVIO 3 – Diagonal principal (3 espaços), inicia em (0,0)
    for (int k = 0; k < 3; k++) {
        tabuleiro[0 + k][0 + k] = 3;
    }

    // NAVIO 4 – Diagonal secundária (3 espaços), inicia em (2,7)
    for (int k = 0; k < 3; k++) {
        tabuleiro[2 + k][7 - k] = 3;
    }

    // Exibir o tabuleiro completo
    printf("Tabuleiro 10x10 (0 = vazio, 3 = navio):\n\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
