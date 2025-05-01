#include <stdio.h>

int particionar(int arr[], int esq, int dir) {
    int pivo = arr[dir];
    int i = esq - 1;
    
    for (int j = esq; j < dir; j++) {
        if (arr[j] <= pivo) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    
    int temp = arr[i + 1];
    arr[i + 1] = arr[dir];
    arr[dir] = temp;
    
    return i + 1;
}

void quickSort(int arr[], int esq, int dir) {
    if (esq < dir) {
        int pivo = particionar(arr, esq, dir);
        
        quickSort(arr, esq, pivo - 1);  
        quickSort(arr, pivo + 1, dir);  
    }
}

int main() {
    int arr[] = {9, 2, 5, 1, 7};  
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array original: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    quickSort(arr, 0, n - 1);

    printf("Array ordenado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
