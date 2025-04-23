#include <stdio.h>

int main(){

    char linha [10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    char coluna [10] = {1 , 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int tabuleiro[10][10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };

    for (int l = 0; l< 10; l++){
        printf(" %c", linha[l]);
    }
    for (int c, correr = 0; c, correr < 10; c++, correr++){
        printf("\n%d %d %d %d %d %d %d %d %d %d %d", coluna [c], tabuleiro[correr][0], tabuleiro[correr][1], tabuleiro[correr][2], tabuleiro[correr][3], 
            tabuleiro[correr][4], tabuleiro[correr][5], tabuleiro[correr][6], tabuleiro[correr][7], tabuleiro[correr][8], tabuleiro[correr][9]);
}

printf("\n");

    return 0;
}