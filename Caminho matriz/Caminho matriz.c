#include <stdio.h>

#define N 3  // Definindo o tamanho da matriz (3x3)

int matriz[N][N] = {
    {0, 1, 0},
    {0, 0, 0},
    {1, 0, 0}
};


int encontrarCaminho(int x, int y, int destinoX, int destinoY) {
 
    if (x < 0 || x >= N || y < 0 || y >= N || matriz[x][y] == 1) {
        return 0; 
    }

    
    if (x == destinoX && y == destinoY) {
        printf("(%d, %d) ", x, y);
        return 1;  
    }

    
    matriz[x][y] = 1;

   
    if (encontrarCaminho(x, y + 1, destinoX, destinoY)) {
        printf("(%d, %d) ", x, y);
        return 1;  
    }

   
    if (encontrarCaminho(x + 1, y, destinoX, destinoY)) {
        printf("(%d, %d) ", x, y);
        return 1;
    }

   
    matriz[x][y] = 0;
    return 0;
}

int main() {
    int origemX = 0, origemY = 0;
    int destinoX = 2, destinoY = 2;

    printf("Caminho encontrado: ");
    if (!encontrarCaminho(origemX, origemY, destinoX, destinoY)) {
        printf("Nenhum caminho encontrado.\n");
    }
    printf("\n");

    return 0;
}
