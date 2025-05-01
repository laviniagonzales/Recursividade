#include <stdio.h>

int somaNaturais(int n) {
    if (n == 0)
        return 0;
    return n + somaNaturais(n - 1);
}

int main() {
    int numero;
    printf("Digite um número natural: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Número inválido!\n");
    } else {
        printf("Soma dos primeiros %d números naturais: %d\n", numero, somaNaturais(numero));
    }

    return 0;
}
