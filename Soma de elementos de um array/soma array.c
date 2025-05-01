#include <stdio.h>

int somaArray(int arr[], int tamanho) {
    if (tamanho == 0) 
        return 0;
    return arr[tamanho - 1] + somaArray(arr, tamanho - 1);  
}

int main() {
    int arr[] = {1, 2, 3, 4};  
    int tamanho = sizeof(arr) / sizeof(arr[0]);  

    printf("Soma dos elementos do array: %d\n", somaArray(arr, tamanho));

    return 0;
}
