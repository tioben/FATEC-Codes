//Instruções
//Escreva uma função ordena (a, b) que receba dois inteiros a e b e devolva o menor deles em a e o maior em b.

#include <stdio.h>

void ordenada(int pos1, int pos2, int *a, int *b) {
    if (pos1 > pos2) {
        *a = pos2; // menor em 'a'
        *b = pos1; // maior em 'b'
    } else if (pos1 < pos2) {
        *a = pos1; // menor em 'a'
        *b = pos2; // maior em 'b'
    } else {
        *a = pos1; // ambos recebem o mesmo valor
        *b = pos2;
    }
}

int main() {
    int num1, num2;
    int menor, maior;

    printf("Digite um numero: ");
    scanf("%i", &num1);

    printf("Digite um numero: ");
    scanf("%i", &num2);

    ordenada(num1, num2, &menor, &maior);

    printf("Menor: %d, Maior: %d\n", menor, maior);

    return 0;
}
