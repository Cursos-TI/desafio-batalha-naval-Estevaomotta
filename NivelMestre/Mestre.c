#include <stdio.h>

#define TAM 7 // Tamanho do tabuleiro (ímpar para centralizar melhor)

// Exibe a matriz
void exibirTabuleiro(int tab[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// Zera a matriz
void limparTabuleiro(int tab[TAM][TAM]) {
    for (int i = 0; i < TAM; i++)
        for (int j = 0; j < TAM; j++)
            tab[i][j] = 0;
}

// Habilidade em cone (triângulo para baixo a partir do topo central)
void habilidadeCone(int tab[TAM][TAM]) {
    limparTabuleiro(tab);
    int centro = TAM / 2;
    for (int i = 0; i <= centro; i++) {
        for (int j = centro - i; j <= centro + i; j++) {
            tab[i][j] = 1;
        }
    }
}

// Habilidade em cruz (horizontal e vertical a partir do centro)
void habilidadeCruz(int tab[TAM][TAM]) {
    limparTabuleiro(tab);
    int centro = TAM / 2;
    for (int i = 0; i < TAM; i++) {
        tab[centro][i] = 1;
        tab[i][centro] = 1;
    }
}

// Habilidade em octaedro (forma de losango centrado)
void habilidadeOctaedro(int tab[TAM][TAM]) {
    limparTabuleiro(tab);
    int centro = TAM / 2;
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if (abs(i - centro) + abs(j - centro) <= centro) {
                tab[i][j] = 1;
            }
        }
    }
}

int main() {
    int tabuleiro[TAM][TAM];

    printf("Habilidade: CONE\n");
    habilidadeCone(tabuleiro);
    exibirTabuleiro(tabuleiro);

    printf("Habilidade: CRUZ\n");
    habilidadeCruz(tabuleiro);
    exibirTabuleiro(tabuleiro);

    printf("Habilidade: OCTAEDRO\n");
    habilidadeOctaedro(tabuleiro);
    exibirTabuleiro(tabuleiro);

    return 0;
}
