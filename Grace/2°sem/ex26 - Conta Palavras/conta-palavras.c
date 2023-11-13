//Instruções
//Escreva um programa que leia uma frase, conte e exiba a quantidade de palavras digitadas.

#include <stdio.h>

int main() {
    char frase[100];
    int palavras = 0;
    int i = 0;
    int emPalavra = 0; // Variável para acompanhar se está dentro de uma palavra

    printf("Digite uma frase: ");
    scanf("%[^\n]", frase);

    while (frase[i] != '\0') {
        // Se o caractere atual não é um espaço em branco, tabulação ou nova linha
        if (frase[i] != ' ' && frase[i] != '\t' && frase[i] != '\n') {
            // Se ainda não estamos dentro de uma palavra
            if (!emPalavra) {
                emPalavra = 1;  // Marca que estamos dentro de uma palavra
                palavras++;     // Incrementa o contador de palavras
            }
        } else {
            emPalavra = 0;  // Fora de uma palavra
        }
        i++;  // Move para o próximo caractere na frase
    }

    printf("Frase: %s\n", frase);
    printf("Numero de palavras: %d\n", palavras);

    return 0;
}
