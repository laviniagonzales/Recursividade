#include <stdio.h>

void contagemRegressiva(int n) {
    if (n < 0)
        return;
    printf("%d ", n);
    contagemRegressiva(n - 1);
}

int main() {
    int numero;
    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Número inválido!\n");
    } else {
        printf("Contagem regressiva: ");
        contagemRegressiva(numero);
        printf("\n");
    }

    return 0;
}
