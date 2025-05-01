#include <stdio.h>

void imprimirPares(int n) {
    if (n < 0)  
        return;
    if (n % 2 == 0) 
        printf("%d ", n); 
    imprimirPares(n - 1); 
}

int main() {
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    printf("Números pares de 0 até %d: ", numero);
    imprimirPares(numero);  
    printf("\n");

    return 0;
}
