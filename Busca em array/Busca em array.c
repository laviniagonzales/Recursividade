#include <stdio.h>

int buscarElemento(int arr[], int tamanho, int chave) {
    if (tamanho == 0)  
        return 0;
    if (arr[tamanho - 1] == chave)  
        return 1;  
    return buscarElemento(arr, tamanho - 1, chave); 
}

int main() {
    int arr[] = {2, 4, 6, 8};  
    int chave;
    int tamanho = sizeof(arr) / sizeof(arr[0]);  
    
    printf("Digite um número para buscar: ");
    scanf("%d", &chave);

    if (buscarElemento(arr, tamanho, chave)) {
        printf("Elemento %d encontrado no array.\n", chave);
    } else {
        printf("Elemento %d não encontrado no array.\n", chave);
    }

    return 0;
}
