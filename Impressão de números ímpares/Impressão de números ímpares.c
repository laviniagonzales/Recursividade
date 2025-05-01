#include <stdio.h>

void imprimirImpares(int n) {
    if (n < 1)  
        return;
    if (n % 2 != 0)  
        printf("%d ", n);  
    imprimirImpares(n - 1);  
}

int main() {
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    printf("Números ímpares de 1 até %d: ", numero);
    imprimirImpares(numero);  
    printf("\n");

    return 0;
}
