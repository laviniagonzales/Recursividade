#include <stdio.h>

int fatorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * fatorial(n - 1);
}

int main() {
    int numero;
    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Número inválido!\n");
    } else {
        printf("Fatorial de %d é %d\n", numero, fatorial(numero));
    }

    return 0;
}
