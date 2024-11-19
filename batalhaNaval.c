#include <stdio.h>

#define TAM 10 // Tamanho do tabuleiro (10x10)
#define NAVIO_SIZE 3 // Tamanho dos navios (3 posições)

// Função para inicializar o tabuleiro com 0 (água)
void inicializarTabuleiro(int tabuleiro[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0; // Inicializa com 0 (água)
        }
    }
}

// Função para posicionar um navio horizontalmente
void posicionarNavioHorizontal(int tabuleiro[TAM][TAM], int linha, int coluna) {
    for (int i = 0; i < NAVIO_SIZE; i++) {
        tabuleiro[linha][coluna + i] = 3; // Marca com 3 (parte do navio)
        printf("Navio Horizontal - Coordenada: (%d, %d)\n", linha, coluna + i);
    }
}

// Função para posicionar um navio verticalmente
void posicionarNavioVertical(int tabuleiro[TAM][TAM], int linha, int coluna) {
    for (int i = 0; i < NAVIO_SIZE; i++) {
        tabuleiro[linha + i][coluna] = 3; // Marca com 3 (parte do navio)
        printf("Navio Vertical - Coordenada: (%d, %d)\n", linha + i, coluna);
    }
}

// Função para exibir o tabuleiro
void exibirTabuleiro(int tabuleiro[TAM][TAM]) {
    printf("\nTabuleiro de Batalha Naval:\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[TAM][TAM];

    // Inicializar o tabuleiro
    inicializarTabuleiro(tabuleiro);

    // Definir as coordenadas de posicionamento dos navios
    int linhaHorizontal = 2, colunaHorizontal = 3; // Navio horizontal na linha 2, coluna 3
    int linhaVertical = 5, colunaVertical = 6;     // Navio vertical na linha 5, coluna 6

    // Posicionar os navios no tabuleiro
    posicionarNavioHorizontal(tabuleiro, linhaHorizontal, colunaHorizontal);
    posicionarNavioVertical(tabuleiro, linhaVertical, colunaVertical);

    // Exibir o tabuleiro
    exibirTabuleiro(tabuleiro);

    return 0;
}
