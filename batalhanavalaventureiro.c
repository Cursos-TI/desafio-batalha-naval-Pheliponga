#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10
#define ABC 10
#define NUMEROS 10

int main() {

    int matriz [LINHAS][COLUNAS]; //As dimensões da matriz foram definidas anteriormentes.
    int soma = 0;

    char cabecalho [ABC]; // Cabeçalho da MATRIZ (A a J), represantado na horizontal.
    char letra = 'A';

    int lateral [NUMEROS]; // Cabeçalho da MATRIZ (1 a 10), representado na vertical.
    int numeral = 1;

    printf("TABULEIRO BATALHA NAVAL \n\n");
    
    for (int k = 0; k < ABC; k++){

        cabecalho[k] = letra;
        letra ++;

        printf(" %2c", cabecalho[k]);
    }
    
    printf("\n");

    for (int i = 0; i < LINHAS; i++){
        printf("%2d ", numeral);
        numeral++;
        for(int j = 0; j < COLUNAS; j++){

            matriz[i][j] = soma; // Inserção de valores na matriz 10x10.

            matriz[7][3] = 3; // Navio horizontal;
            matriz[7][4] = 3; // Navio horizontal;
            matriz[7][5] = 3; // Navio horizontal;

            matriz[2][1] = 3; // Navio vertical;
            matriz[3][1] = 3; // Navio vertical;
            matriz[4][1] = 3; // Navio vertical;

            matriz[2][2] = 3; // Navio diagonal esquerda;
            matriz[3][3] = 3; // Navio diagonal esquerda;
            matriz[4][4] = 3; // Navio diagonal esquerda;

            matriz[2][8] = 3; // Navio diagonal direita;
            matriz[3][7] = 3; // Navio diagonal direita;
            matriz[4][6] = 3; // Navio diagonal direita;

            
            printf("%2d ", matriz[i][j]);
        } 
        printf("\n");
    }


}