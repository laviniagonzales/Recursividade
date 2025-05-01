#include <stdio.h>

void converterBinario(int n) {
    if (n == 0)  
        return;
    converterBinario(n / 2);  
    printf("%d", n % 2);
}

int main() {
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    printf("Representação binária de %d: ", numero);
    if (numero == 0) {
        printf("0");  
    } else {
        converterBinario(numero);
    }
    printf("\n");

    return 0;
}
