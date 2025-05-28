#include <stdio.h>

int main() {
    int tabuleiro[5][5] = {0};
    int linha, coluna;

    // Posicionamento do navio vertical
    printf("Posicione o navio VERTICAL (tamanho 3).\n");
    printf("Digite a linha inicial (0 a 2): ");
    scanf("%d", &linha);
    printf("Digite a coluna (0 a 4): ");
    scanf("%d", &coluna);

    if (linha >= 0 && linha <= 2 && coluna >= 0 && coluna < 5) {
        for (int i = 0; i < 3; i++) {
            tabuleiro[linha + i][coluna] = 1;
        }
    } else {
        printf("Posição inválida para navio vertical.\n");
        return 1;
    }

    // Posicionamento do navio horizontal
    printf("\nPosicione o navio HORIZONTAL (tamanho 3).\n");
    printf("Digite a linha (0 a 4): ");
    scanf("%d", &linha);
    printf("Digite a coluna inicial (0 a 2): ");
    scanf("%d", &coluna);

    if (linha >= 0 && linha < 5 && coluna >= 0 && coluna <= 2) {
        for (int j = 0; j < 3; j++) {
            tabuleiro[linha][coluna + j] = 2;
        }
    } else {
        printf("Posição inválida para navio horizontal.\n");
        return 1;
    }

    // Exibe coordenadas do navio vertical
    printf("\nCoordenadas do Navio Vertical (valor = 1):\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (tabuleiro[i][j] == 1) {
                printf("(%d, %d)\n", i, j);
            }
        }
    }

    // Exibe coordenadas do navio horizontal
    printf("\nCoordenadas do Navio Horizontal (valor = 2):\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (tabuleiro[i][j] == 2) {
                printf("(%d, %d)\n", i, j);
            }
        }
    }

    // Visualização do tabuleiro
    printf("\nVisualização do tabuleiro:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}