//Instruções
//O quadrado de um número natural n é dado pela soma dos n primeiros números ímpares consecutivos.
//Dado um número n, calcule seu quadrado usando a soma de ímpares ao invés de produto.

#include <stdio.h>

int main() {
    int n, i, impar = 1, soma=0;
    
    printf("Digite um numero natural maior que 0: ");
    scanf("%i", &n);

    for (i = 1; i <= n; i++)
    {
        soma += impar; 
        impar += 2;
    }

    printf("-------------------------------------------\n");
    printf("O quadrado de %d e igual a %d\n", n, soma);
    printf("-------------------------------------------\n");

    return 0;
}


