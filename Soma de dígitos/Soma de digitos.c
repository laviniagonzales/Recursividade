#include <stdio.h>

int somaDigitos(int n) {
    if (n == 0)
        return 0;
    return (n % 10) + somaDigitos(n / 10);
}

int main() {
    int numero;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Número inválido!\n");
    } else {
        printf("Soma dos dígitos de %d = %d\n", numero, somaDigitos(numero));
    }

    return 0;
}
