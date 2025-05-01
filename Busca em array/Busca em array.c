#include <stdio.h>

int buscarElemento(int arr[], int tamanho, int chave) {
    if (tamanho == 0)  // Caso base: se o array não tiver mais elementos, o elemento não foi encontrado
        return 0;
    if (arr[tamanho - 1] == chave)  // Se o último elemento for o que estamos buscando
        return 1;  // Elemento encontrado
    return buscarElemento(arr, tamanho - 1, chave);  // Chamada recursiva com o tamanho decrementado
}

int main() {
    int arr[] = {2, 4, 6, 8};  // Array de exemplo
    int chave;
    int tamanho = sizeof(arr) / sizeof(arr[0]);  // Calcula o tamanho do array

    printf("Digite um número para buscar: ");
    scanf("%d", &chave);

    if (buscarElemento(arr, tamanho, chave)) {
        printf("Elemento %d encontrado no array.\n", chave);
    } else {
        printf("Elemento %d não encontrado no array.\n", chave);
    }

    return 0;
}
