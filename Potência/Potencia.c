#include <stdio.h>

int potencia(int x, int n) {
    if (n == 0)
        return 1;
    if (n % 2 == 0) {
        int metade = potencia(x, n / 2);
        return metade * metade;
    } else {
        return x * potencia(x, n - 1);
    }
}

int main() {
    int base, expoente;
    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite o expoente (inteiro não negativo): ");
    scanf("%d", &expoente);

    if (expoente < 0) {
        printf("Expoente inválido!\n");
    } else {
        printf("%d^%d = %d\n", base, expoente, potencia(base, expoente));
    }

    return 0;
}
