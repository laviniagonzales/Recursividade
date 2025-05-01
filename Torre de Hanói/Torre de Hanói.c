#include <stdio.h>

void torreDeHanoi(int n, char origem, char destino, char auxiliar) {
    if (n == 1) { 
        printf("Mover disco 1 de %c para %c\n", origem, destino);
        return;
    }

    torreDeHanoi(n - 1, origem, auxiliar, destino);  
    printf("Mover disco %d de %c para %c\n", n, origem, destino);  
    torreDeHanoi(n - 1, auxiliar, destino, origem);  
}

int main() {
    int discos;
    printf("Digite o número de discos: ");
    scanf("%d", &discos);

    printf("Soluções para a Torre de Hanói com %d discos:\n", discos);
    torreDeHanoi(discos, 'A', 'C', 'B');  

    return 0;
}
