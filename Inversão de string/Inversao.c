#include <stdio.h>
#include <string.h>

void inverterString(char *str, int inicio, int fim) {
    if (inicio >= fim)
        return;

    // Troca os caracteres nas posições 'inicio' e 'fim'
    char temp = str[inicio];
    str[inicio] = str[fim];
    str[fim] = temp;

    // Chamada recursiva para o meio da string
    inverterString(str, inicio + 1, fim - 1);
}

int main() {
    char texto[100];
    printf("Digite uma string: ");
    scanf("%s", texto);  // Lê uma string sem espaços

    int tamanho = strlen(texto);
    inverterString(texto, 0, tamanho - 1);

    printf("String invertida: %s\n", texto);

    return 0;
}
