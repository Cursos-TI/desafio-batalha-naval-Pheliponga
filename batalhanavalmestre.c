#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10
#define ABC 10

int main() {

    int matriz [LINHAS][COLUNAS]; //As dimensões da matriz foram definidas anteriormentes.
    int soma = 0;

    char cabecalho [ABC]; // Cabeçalho da MATRIZ (A a J), represantado na horizontal.
    char letra = 'A';

    int numeral = 1; // inteiro declarado com o valor igual a 1. Será utilizado para incrementar 10 vezes.

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
        }
    }

    for (int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){
            if (matriz[7][3] != 0){
                matriz[7][3] = 1; // Navio horizontal
            } else {
                matriz[7][3] = 3;
            } 
            if (matriz[7][4] != 0){
                matriz[7][4] = 1; // Navio horizontal
            } else {
                matriz[7][4] = 3;
            } 
            if (matriz[7][5] != 0){
                matriz[7][5] = 1; // Navio horizontal
            } else {
                matriz[7][5] = 3;
            }
            break;
        }
        break;
    }

    for (int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){
            if (matriz[2][1] != 0){
                matriz[2][1] = 1; // Navio vertical;
            } else{
                matriz[2][1] = 3;
            }
            if (matriz[3][1] != 0){
                matriz[3][1] = 1; // Navio vertical;
            } else{
                matriz[3][1] = 3; 
            }
            if (matriz[4][1] != 0){
                matriz[4][1] = 1; // Navio vertical;
            } else{
                matriz[4][1] = 3;
            }
            break;
        }
        break;
    }

    for (int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){
            if (matriz[2][2] != 0){
                matriz[2][2] = 1; // Navio diagonal esquerda;
            } else{
                matriz[2][2] = 3;
            }
            if (matriz[3][3] != 0){
                matriz[3][3] = 1; // Navio diagonal esquerda;
            } else{
                matriz[3][3] = 3;
            }
            if (matriz[4][4] != 0){
                matriz[4][4] = 1; // Navio diagonal esquerda;
            } else{
                matriz[4][4] = 3;
            }

            if (matriz[2][8] != 0){
                matriz[2][8] = 1; // Navio diagonal direita;
            } else{
                matriz[2][8] = 3;
            }
            if (matriz[3][7] != 0){
                matriz[3][7] = 1; // Navio diagonal direita;
            } else{
                matriz[3][7] = 3;
            }
            if (matriz[4][6] != 0){
                matriz[4][6] = 1; // Navio diagonal direita;
            } else{
                matriz[4][6] = 3;
            }
            break;
        } 
        break;
    }
    
    for (int i = 0; i < LINHAS; i++){
        printf("%2d", numeral); // exibição do numeral da coluna vertical.
        numeral++; // incrementação do numeral da coluna
        for(int j = 0; j < COLUNAS; j++){
            printf(" %2d", matriz[i][j]); // exibição da matriz.
        }
        printf("\n");
    }

 /* CONE = 4;
    CRUZ = 5;
    OCTAEDRO = 6. 
*/



return 0;

}