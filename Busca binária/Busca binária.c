#include <stdio.h>

int buscaBinaria(int arr[], int esq, int dir, int chave) {
    if (esq <= dir) {
        int meio = esq + (dir - esq) / 2;

        
        if (arr[meio] == chave) {
            return meio;
        }

      
        if (arr[meio] > chave) {
            return buscaBinaria(arr, esq, meio - 1, chave);
        }

       
        return buscaBinaria(arr, meio + 1, dir, chave);
    }

    return -1;  
}

int main() {
    int arr[] = {1, 3, 5, 7, 9};  
    int n = sizeof(arr) / sizeof(arr[0]);
    int chave = 5;

    int resultado = buscaBinaria(arr, 0, n - 1, chave);

    if (resultado != -1) {
        printf("Elemento encontrado no índice %d.\n", resultado);
    } else {
        printf("Elemento não encontrado.\n");
    }

    return 0;
}
