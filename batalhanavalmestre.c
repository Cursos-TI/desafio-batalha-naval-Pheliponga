#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10
#define ABC 10

int main() {

    int matriz [LINHAS][COLUNAS]; //As dimensões da matriz foram definidas anteriormentes.
    int soma = 0;

    char cabecalho [ABC]; // Cabeçalho da MATRIZ (A a J), represantado na horizontal.
    char letra = 'A';

    printf("     TABULEIRO BATALHA NAVAL \n\n");
    
    for (int k = 0; k < ABC; k++){

        cabecalho[k] = letra; // código para a execução do cabeçalho de A a J.
        letra ++;

        printf(" %2c", cabecalho[k]);
    }
    
    printf("\n");

    for (int i = 0; i < LINHAS; i++){
        for (int j = 0; j < COLUNAS; j++){

            matriz[i][j] = soma; // Matriz original 10x10

        }
    }

    for (int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){

            matriz[7][3] = 3; // Navio horizontal;
            matriz[7][4] = 3; // Navio horizontal;
            matriz[7][5] = 3; // Navio horizontal;
        }
    }

    for (int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){

            matriz[2][1] = 3; // Navio vertical;
            matriz[3][1] = 3; // Navio vertical;
            matriz[4][1] = 3; // Navio vertical;
        }
    }

    for (int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){

            matriz[2][2] = 3; // Navio diagonal esquerda;
            matriz[3][3] = 3; // Navio diagonal esquerda;
            matriz[4][4] = 3; // Navio diagonal esquerda;

            matriz[2][8] = 3; // Navio diagonal direita;
            matriz[3][7] = 3; // Navio diagonal direita;
            matriz[4][6] = 3; // Navio diagonal direita;
        } 
    }

    for (int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){

            matriz[0][7] = 4; // CONE
            matriz[1][6] = 4; matriz[1][7] = 4; matriz[1][8] = 4;
            matriz[2][5] = 4; matriz[2][6] = 4; matriz[2][7] = 4; matriz[2][8] = 4; matriz[2][9] = 4;
        }
    }

    for (int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){

            matriz[3][2] = 5; // CRUZ
            matriz[4][0] = 5; matriz[4][1] = 5; matriz[4][2] = 5; matriz[4][3] = 5; matriz[4][4] = 5;
            matriz[5][2] = 5;
        }
    }

    for (int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){

            matriz[7][5] = 6; // OCTAEDRO
            matriz[8][4] = 6; matriz[8][5] = 6; matriz[8][6] = 6;
            matriz[9][5] = 6;

           printf(" %2d", matriz[i][j]);
        }
        printf("\n");
    }
    


 /* CONE = 4;
    CRUZ = 5;
    OCTAEDRO = 6. 
*/



return 0;

}