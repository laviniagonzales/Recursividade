#include <stdio.h>

int exponenciacaoRapida(int x, int n) {
    if (n == 0) {
        return 1;  
    }
    
    if (n % 2 == 0) {
        int half = exponenciacaoRapida(x, n / 2);
        return half * half; 
    } else {
        return x * exponenciacaoRapida(x, n - 1);  
    }
}

int main() {
    int x = 3, n = 4;

    int resultado = exponenciacaoRapida(x, n);

    printf("%d^%d = %d\n", x, n, resultado);

    return 0;
}
