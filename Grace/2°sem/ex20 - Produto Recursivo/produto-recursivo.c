//Instruções
//
//Codifique uma função recursiva que calcule o produto de dois naturais usando soma.
//Quais as soluções triviais?
//Qual a solução geral?
//O problema está diminuindo?

#include <stdio.h>

unsigned int produto(unsigned int a, unsigned int b);

int main() {
    unsigned int a, b;

    printf("Digite dois números naturais (a e b): ");
    scanf("%u %u", &a, &b);

    unsigned int resultado = produto(a, b);

    printf("O produto de %u e %u é: %u\n", a, b, resultado);

    return 0;
}

unsigned int produto(unsigned int a, unsigned int b) {
    // Caso base: Quando um dos números é zero, o produto é zero.
    if (a == 0 || b == 0) {
        return 0;
    }

    // Caso recursivo: O produto de a e b é a + produto(a, b - 1)
    return a + produto(a, b - 1);
}

//Soluções triviais:
//Se um dos números for zero, o produto é zero.
//Se ambos os números forem iguais a um, o produto é um.
//
//Solução geral:
//A solução geral é que o produto de dois números naturais "a" e "b" é obtido somando "a" a "produto(a, b - 1)" até que "b" seja igual a zero, usando a função recursiva que foi mostrada acima.
//
//O problema está diminuindo?
//Sim, o problema está diminuindo a cada iteração da recursão, pois o valor de "b" é decrementado em 1 em cada chamada recursiva até atingir o caso base onde "b" é igual a zero. Portanto, o problema está diminuindo progressivamente até que ele seja resolvido.