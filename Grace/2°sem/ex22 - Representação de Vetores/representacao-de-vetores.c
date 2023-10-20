//Instruções
//Represente graficamente (desenhe) os vetores abaixo (com suas posições indexadas e elementos armazenados).
//int X[4];
//
//
//char Y[7] = {'x', 'y', 'z', 'w’};
//
//
//float Z[] = {1.6, 1.72, 1.83, 1.67, 1.8};

#include <stdio.h>

int main() {
    int X[4];
    char Y[7] = {'x', 'y', 'z', 'w'};
    float Z[] = {1.6, 1.72, 1.83, 1.67, 1.8};

    // Imprime o vetor X de inteiros
    printf("Vetor X:\n");
    for (int i = 0; i < 4; i++) {
        printf("X[%d] = %d\n", i, X[i]);
    }

    // Imprime o vetor Y de caracteres
    printf("\nVetor Y:\n");
    for (int i = 0; i < 7; i++) {
        printf("Y[%d] = %c\n", i, Y[i]);
    }

    // Imprime o vetor Z de números de ponto flutuante
    printf("\nVetor Z:\n");
    for (int i = 0; i < 5; i++) {
        printf("Z[%d] = %.2f\n", i, Z[i]);
    }

    return 0;
}