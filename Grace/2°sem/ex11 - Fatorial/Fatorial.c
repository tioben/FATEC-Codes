//Instruções
//Dado um número inteiro n >= 0, calcular o fatorial de n (n!).
//      n! = n * (n-1) * (n-2)*...* 2 * 1

#include <stdio.h>

int main(){
    int num, fat, inicialNum;
    printf("Digite um numero inteiro maior que 0: ");
    scanf("%i", &num);

    inicialNum = num;
    fat = 1;
    for (; num > 0; num--)
    {
        fat *= num;
    }

    printf("------------------------------------\n");
    printf("Fatorial de %i: %i", inicialNum, fat);
    printf("\n------------------------------------");
    
    return 0;
};