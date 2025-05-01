#include <stdio.h>
#include <string.h>

void inverterString(char *str, int inicio, int fim) {
    if (inicio >= fim)
        return;

   
    char temp = str[inicio];
    str[inicio] = str[fim];
    str[fim] = temp;

   
    inverterString(str, inicio + 1, fim - 1);
}

int main() {
    char texto[100];
    printf("Digite uma string: ");
    scanf("%s", texto);  

    int tamanho = strlen(texto);
    inverterString(texto, 0, tamanho - 1);

    printf("String invertida: %s\n", texto);

    return 0;
}
