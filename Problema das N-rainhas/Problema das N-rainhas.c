#include <stdio.h>
#include <stdbool.h>

#define N 4  // Tamanho do tabuleiro (4x4)

int tabuleiro[N][N];

bool eSegura(int linha, int coluna) {
    
    for (int i = 0; i < coluna; i++) {
        if (tabuleiro[linha][i] == 1) {
            return false;
        }
    }

 
    for (int i = linha, j = coluna; i >= 0 && j >= 0; i--, j--) {
        if (tabuleiro[i][j] == 1) {
            return false;
        }
    }


    for (int i = linha, j = coluna; i < N && j >= 0; i++, j--) {
        if (tabuleiro[i][j] == 1) {
            return false;
        }
    }

    return true;
}


bool resolverNRainhas(int coluna) {
  
    if (coluna >= N) {
        return true;
    }

    
    for (int i = 0; i < N; i++) {
      
        if (eSegura(i, coluna)) {
            tabuleiro[i][coluna] = 1; 

          
            if (resolverNRainhas(coluna + 1)) {
                return true;
            }

      
            tabuleiro[i][coluna] = 0;
        }
    }

    return false;  
}


void imprimirTabuleiro() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    if (resolverNRainhas(0)) {
        printf("Solução encontrada:\n");
        imprimirTabuleiro();
    } else {
        printf("Nenhuma solução encontrada.\n");
    }

    return 0;
}
