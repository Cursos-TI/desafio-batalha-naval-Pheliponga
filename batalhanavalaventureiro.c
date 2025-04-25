#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10
#define ABC 10
#define NUMEROS 10

int main() {

    int matriz [LINHAS][COLUNAS]; //As dimensões da matriz foram definidas anteriormentes.
    int soma = 0;

    char cabecalho [ABC];
    char letra = '@';

    int lateral [NUMEROS];
    int numeral = 0;

    printf("TABULEIRO BATALHA NAVAL \n\n");
    
    for (int k = 0; k < 10; k++){

        letra ++;
        cabecalho[k] = letra;

        printf(" %c", cabecalho[k]);
    }
    
    printf("\n");

     for (int i, l = 0; i, l < 10; i++, l++){
        
        for(int j = 0; j < 10; j++){
          
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

            printf("%d ", matriz[i][j]);
        } 
        printf("\n");
    }


}