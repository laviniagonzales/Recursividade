#include <stdio.h>

void gerarParenteses(int n, int aberto, int fechado, char *resultado, int index) {
    
    if (aberto == n && fechado == n) {
        resultado[index] = '\0';
        printf("%s\n", resultado);
        return;
    }

    
    if (aberto < n) {
        resultado[index] = '(';
        gerarParenteses(n, aberto + 1, fechado, resultado, index + 1);
    }

   
    if (fechado < aberto) {
        resultado[index] = ')';
        gerarParenteses(n, aberto, fechado + 1, resultado, index + 1);
    }
}

int main() {
    int n;
    printf("Digite o número de pares de parênteses: ");
    scanf("%d", &n);

    char resultado[2 * n + 1];
    gerarParenteses(n, 0, 0, resultado, 0);

    return 0;
}
