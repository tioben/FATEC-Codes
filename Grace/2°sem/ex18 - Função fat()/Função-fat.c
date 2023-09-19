//Instruções
//Codifique a função fat(n), que devolve o fatorial de um inteiro n. Lembrando que:
//      n! = n * (n-1) * (n-2) * ... * 2 * 1
//      0! = 1 (por definição)
//      
//      recebe parâmetro: n
//      tipo devolvido: inteiro

// Librarys
#include <stdio.h>
#include <string.h>

// Functions
int fat(int n){
    int nn;
    nn = 1;
    for (; n > 0 ; n--)
    {
        nn *= n;
    }
    
    return nn;
};

// Main function
int main(){
    int number;
    printf("Digite um numero: ");
    scanf("%i", &number);

    printf("O fatorial de %i e: %i", number, fat(number));

    return 0;
};
