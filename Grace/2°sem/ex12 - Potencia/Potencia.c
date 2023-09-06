//Instruções
//Dado N >= 0 inteiro e X real, calcular X elevado a potência N (sem usar pow).

#include <stdio.h>

int main(){
    int num, x, calc, initialPot;

    printf("Digite um numero maior que 0 para base: ");
    scanf("%i", &num);
    printf("Digite um numero maior que 0 para potencia: ");
    scanf("%i", &x);
    initialPot = x;
    calc = 1;

    for (; x > 0; x--)
    {
        calc *= num;
    }

    printf("-------------------------------------------\n");
    printf("%i elevado a %i = %i", num, initialPot, calc);
    printf("\n-------------------------------------------");   

    return 0;
};