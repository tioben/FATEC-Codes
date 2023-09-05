#include <stdio.h>

int main() {
    char caracter;

    // Solicitar o caractere ao usuário
    printf("Digite um caractere: ");
    scanf("%c", &caracter);

    // Mostrar o código ASCII em octal, decimal e hexadecimal
    printf("Código ASCII do caractere '%c':\n", caracter);
    printf("Em octal: %o\n", caracter);
    printf("Em decimal: %d\n", caracter);
    printf("Em hexadecimal: %x\n", caracter);

    return 0;
}