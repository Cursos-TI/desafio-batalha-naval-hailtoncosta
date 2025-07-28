#include <stdio.h>

//Exibição de matriz
void exibir_matriz(int matriz[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }
}

//Habilidade Cone
void habilidade_cone(int matriz[5][5]) {
    int cone[5][5] = {
        {0,0,1,0,0},
        {0,1,1,1,0},
        {1,1,1,1,1},
        {0,0,0,0,0},
        {0,0,0,0,0}
    };

    for (int i = 0; i < 5; i++) 
        for (int j = 0; j < 5; j++)
            matriz[i][j] = cone[i][j];
}

//Habilidade Cruz
void habilidade_cruz(int matriz[5][5]) {
    int cruz[5][5] = {
        {0,0,1,0,0},
        {1,1,1,1,1},
        {0,0,1,0,0},
        {0,0,0,0,0},
        {0,0,0,0,0}
    };
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++) {
            matriz[i][j] = cruz[i][j];
        }
}

//Habilidade Octaedro
void habilidade_Octaedro(int matriz[5][5]) {
    int octaedro[5][5] = {
        {0,0,1,0,0},
        {0,1,1,1,0},
        {0,0,1,0,0},
        {0,0,0,0,0},
        {0,0,0,0,0}
    };
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++) {
            matriz[i][j] = octaedro[i][j];
        }
}
int main() {
    int habilidade[5][5];

    printf("Habilidade: Cone\n");
    habilidade_cone(habilidade);
    exibir_matriz(habilidade);

    printf("\nHabilidade: Cruz\n");
    habilidade_cruz(habilidade);
    exibir_matriz(habilidade);

    printf("\nHabilidade: Octaedro\n");
    habilidade_Octaedro(habilidade);
    exibir_matriz(habilidade);

    return 0;
}
