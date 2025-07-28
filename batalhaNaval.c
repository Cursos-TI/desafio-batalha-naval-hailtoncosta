#include <stdio.h>

//Exibição de matriz
void exibir_matriz(int matriz[10][10], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }
}

//Gerando tabuleiro
void gerar_tabuleiro_aventureiro(int tabuleiro[10][10]) {
    //Iniciando com 0
    for (int i = 0; i < 10; i++) 
        for (int j = 0; j < 10; j++) 
            tabuleiro[i][j] = 0;
    
    //Posiciona navos na horizontal
    for (int j = 2; j < 5; j++)
        tabuleiro[0][j] = 3;

    //Posiciona navos na vertical
    for (int i = 2; i < 5; i++)
        tabuleiro[i][0] = 3;
        
    //Posiciona navio na diagonal principal
    for (int i = 0; i < 3; i++)
        tabuleiro[i][i] = 3;
    
    //Posiciona navio na diagonal secundária
    for (int i = 0; i < 3; i++)
        tabuleiro[i][9 - i] = 3;
}


int main() {

    int tabuleiro[10][10];
    gerar_tabuleiro_aventureiro(tabuleiro);
    printf("Tabuleiro - Nivel Aventureiro: \n");
    exibir_matriz(tabuleiro, 10);

    return 0;
}
