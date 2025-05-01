#include <stdio.h>

int somaArray(int arr[], int tamanho) {
    if (tamanho == 0)  // Caso base: quando o array estiver vazio
        return 0;
    return arr[tamanho - 1] + somaArray(arr, tamanho - 1);  // Soma recursiva
}

int main() {
    int arr[] = {1, 2, 3, 4};  // Array de exemplo
    int tamanho = sizeof(arr) / sizeof(arr[0]);  // Calcula o tamanho do array

    printf("Soma dos elementos do array: %d\n", somaArray(arr, tamanho));

    return 0;
}
