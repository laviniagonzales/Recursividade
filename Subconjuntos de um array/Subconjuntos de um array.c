#include <stdio.h>

void gerarSubconjuntos(int arr[], int n, int indice, int subconjunto[], int k) {
    if (indice == n) {  // Caso base: quando todos os elementos foram processados
        printf("{");
        for (int i = 0; i < k; i++) {
            printf("%d", subconjunto[i]);
            if (i < k - 1) printf(", ");
        }
        printf("}\n");
        return;
    }

    
    subconjunto[k] = arr[indice];
    gerarSubconjuntos(arr, n, indice + 1, subconjunto, k + 1); 
   
    gerarSubconjuntos(arr, n, indice + 1, subconjunto, k); 
}

int main() {
    int arr[] = {1, 2};  

    int n = sizeof(arr) / sizeof(arr[0]);
    int subconjunto[n];  

    printf("Subconjuntos do array: \n");
    gerarSubconjuntos(arr, n, 0, subconjunto, 0);

    return 0;
}
