#include <stdio.h>
#include <string.h>

int ehPalindromo(char *str, int inicio, int fim) {
    if (inicio >= fim)
        return 1; // É palíndromo
    if (str[inicio] != str[fim])
        return 0; // Não é palíndromo
    return ehPalindromo(str, inicio + 1, fim - 1);
}

int main() {
    char texto[100];
    printf("Digite uma string: ");
    scanf("%s", texto);  // Lê uma palavra sem espaços

    int tamanho = strlen(texto);
    if (ehPalindromo(texto, 0, tamanho - 1)) {
        printf("É palíndromo!\n");
    } else {
        printf("Não é palíndromo.\n");
    }

    return 0;
}
