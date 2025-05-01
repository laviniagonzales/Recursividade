#include <stdio.h>

int comprimentoString(char str[]) {
    if (str[0] == '\0')  
        return 0;
    return 1 + comprimentoString(str + 1); 
}

int main() {
    char str[100];
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);  
  
    printf("O comprimento da string é: %d\n", comprimentoString(str));

    return 0;
}
