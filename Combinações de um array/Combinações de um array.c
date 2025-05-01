#include <stdio.h>

void combinar(int arr[], int data[], int inicio, int fim, int indice, int k) {
    if (indice == k) {  
        for (int i = 0; i < k; i++) {
            printf("%d ", data[i]);
        }
        printf("\n");
        return;
    }

    for (int i = inicio; i <= fim && fim - i + 1 >= k - indice; i++) {
        data[indice] = arr[i];  
        combinar(arr, data, i + 1, fim, indice + 1, k);  
    }
}

int main() {
    int arr[] = {1, 2, 3};  
    int k;

    printf("Digite o valor de k (tamanho da combinação): ");
    scanf("%d", &k);

    int n = sizeof(arr) / sizeof(arr[0]);
    int data[k];  

    printf("Combinações de tamanho %d do array: ", k);
    combinar(arr, data, 0, n - 1, 0, k);

    return 0;
}
