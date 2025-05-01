#include <stdio.h>

int verificarPrimo(int n, int divisor) {
    if (n <= 1)  
        return 0;
    if (divisor == 1)  
        return 1;
    if (n % divisor == 0)  
        return 0;
    return verificarPrimo(n, divisor - 1);  
}

int main() {
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (verificarPrimo(numero, numero / 2)) {
        printf("%d é primo!\n", numero);
    } else {
        printf("%d não é primo.\n", numero);
    }

    return 0;
}
