#include <stdio.h>

int verificarPrimo(int n, int divisor) {
    if (n <= 1)  // Caso base: números menores ou iguais a 1 não são primos
        return 0;
    if (divisor == 1)  // Caso base: se o divisor chegou a 1, é primo
        return 1;
    if (n % divisor == 0)  // Se o número for divisível por algum divisor, não é primo
        return 0;
    return verificarPrimo(n, divisor - 1);  // Chamada recursiva com divisor decrementado
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
