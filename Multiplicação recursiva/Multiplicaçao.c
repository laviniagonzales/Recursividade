#include <stdio.h>

int multiplicar(int a, int b) {
    if (b == 0)  
        return 0;
    return a + multiplicar(a, b - 1);  
}

int main() {
    int num1, num2;
    printf("Digite dois números inteiros não negativos: ");
    scanf("%d %d", &num1, &num2);

    printf("%d * %d = %d\n", num1, num2, multiplicar(num1, num2));

    return 0;
}
