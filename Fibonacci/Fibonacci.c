#include <stdio.h>

int fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int numero;
    printf("Digite a posição na sequência de Fibonacci: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Número inválido!\n");
    } else {
        printf("Fibonacci(%d) = %d\n", numero, fibonacci(numero));
    }

    return 0;
}
