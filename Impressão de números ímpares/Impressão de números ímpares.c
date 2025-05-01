#include <stdio.h>

void imprimirImpares(int n) {
    if (n < 1)  // Caso base: quando n for menor que 1, a recursão para
        return;
    if (n % 2 != 0)  // Verifica se o número é ímpar
        printf("%d ", n);  // Imprime o número ímpar
    imprimirImpares(n - 1);  // Chamada recursiva com n decrementado
}

int main() {
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    printf("Números ímpares de 1 até %d: ", numero);
    imprimirImpares(numero);  // Chama a função recursiva
    printf("\n");

    return 0;
}
