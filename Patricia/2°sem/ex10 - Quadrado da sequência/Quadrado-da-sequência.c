//Instruções
//Dada uma sequência de números inteiros diferentes de zero, terminada por um zero, imprima o quadrado de cada número da sequência. Por exemplo:
//      3     ==>  9
//      7     ==>  49
//      -5    ==>  25
//      -2    ==>  4
//      0     ==>  termina o programa

#include <stdio.h>
int main(){
    int x = 1;
    while (x != 0){
        printf("------------------------");
        printf("\nDigite um numero (0 para fechar o programa): ");
        scanf("%i", &x);
        printf("\nQuadrado de %i: %i\n", x, (x*x));
        printf("------------------------");

    }

    return 0;
};
