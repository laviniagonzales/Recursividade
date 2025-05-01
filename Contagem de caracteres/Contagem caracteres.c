#include <stdio.h>
#include <string.h>

int contarCaracteres(char *str, int index) {
    if (str[index] == '\0')  // Caso base: quando encontrar o final da string
        return 0;
    return 1 + contarCaracteres(str, index + 1);  // Contagem recursiva
}

int main() {
    char texto[100];
    printf("Digite uma string: ");
    scanf("%s", texto);  // Lê uma palavra sem espaços

    printf("O número de caracteres na string '%s' é: %d\n", texto, contarCaracteres(texto, 0));

    return 0;
}
