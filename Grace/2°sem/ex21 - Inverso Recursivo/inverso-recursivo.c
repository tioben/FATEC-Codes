//Instruções
//
//Codifique uma função recursiva que recebe um natural n e imprime seus dígitos invertidos (da direita para a esquerda).

#include <stdio.h>

void imprimirDigitosInvertidos(unsigned int n);

int main() {
    unsigned int n;

    printf("Digite um número natural: ");
    scanf("%u", &n);

    printf("Dígitos invertidos: ");
    imprimirDigitosInvertidos(n);

    printf("\n");

    return 0;
}

void imprimirDigitosInvertidos(unsigned int n) {
    // Caso base: Quando o número tem apenas um dígito.
    if (n < 10) {
        printf("%u", n);
        return;
    }

    // Caso recursivo: Imprime o último dígito e chama a função para o número sem o último dígito.
    unsigned int ultimoDigito = n % 10;
    printf("%u", ultimoDigito);
    imprimirDigitosInvertidos(n / 10);
}
