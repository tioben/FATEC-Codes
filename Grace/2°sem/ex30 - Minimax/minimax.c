//Instruções
//Escreva a função minimax (v, n, a, b), que recebe um vetor v, com n valores reais e devolvem em a e b os valores mínimo e máximo entre aqueles armazenados em v. Observação: Parâmetros do tipo vetor sempre são passados por referencia e não por valor

#include <stdio.h>

void minimax(double v[], int n, double *a, double *b) {
    if (n <= 0) {
        *a = *b = 0.0;
        return;
    }

    *a = *b = v[0];

    for (int i = 1; i < n; i++) {
        if (v[i] < *a) {
            *a = v[i];
        } else if (v[i] > *b) {
            *b = v[i];
        }
    }
}

int main() {
    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    double vetor[tamanho];

    printf("Digite os valores do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%lf", &vetor[i]);
    }

    double min, max;

    minimax(vetor, tamanho, &min, &max);

    printf("Minimo: %.2f\n", min);
    printf("Maximo: %.2f\n", max);

    return 0;
}
