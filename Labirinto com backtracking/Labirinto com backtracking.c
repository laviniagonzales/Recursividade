#include <stdio.h>

#define N 4  // Tamanho do labirinto (4x4)

int labirinto[N][N] = {
    {0, 1, 0, 0},
    {0, 0, 0, 1},
    {1, 1, 0, 0},
    {0, 0, 0, 0}
};


void imprimirLabirinto(int labirinto[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (labirinto[i][j] == 1) {
                printf("1 ");
            } else if (labirinto[i][j] == -1) {
                printf("* "); 
            } else {
                printf("0 ");  
            }
        }
        printf("\n");
    }
}


int resolverLabirinto(int x, int y) {
   
    if (x < 0 || x >= N || y < 0 || y >= N || labirinto[x][y] != 0) {
        return 0;
    }

   
    labirinto[x][y] = -1;

   
    if (x == N - 1 && y == N - 1) {
        return 1;
    }

   
    if (resolverLabirinto(x, y + 1)) {
        return 1;
    }

   
    if (resolverLabirinto(x + 1, y)) {
        return 1;
    }

    
    if (resolverLabirinto(x, y - 1)) {
        return 1;
    }

  
    if (resolverLabirinto(x - 1, y)) {
        return 1;
    }

   
    labirinto[x][y] = 0;
    return 0;
}

int main() {
    if (resolverLabirinto(0, 0)) {
        printf("Caminho encontrado:\n");
        imprimirLabirinto(labirinto);
    } else {
        printf("Nenhum caminho encontrado.\n");
    }
    return 0;
}
