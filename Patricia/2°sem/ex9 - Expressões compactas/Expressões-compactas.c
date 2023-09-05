//Instruções
//Quais os valores das variáveis x e y após a execução dessas instruções?
//  a. Seja x=3 e a instrução y = x * (x + 1) * x++.
//  b. Seja x=5, y = 3 e a instrução y *= x+1.

#include <stdio.h>
int main (){
    int x, y;

    //Resposta situação (a)
    x = 3;
    y = x * (x + 1) * x++;
    printf("-------------------------------\n");
    printf("Situacao A\nX: %i\nY: %i\n", x,y);
    printf("-------------------------------");

    //Resposta situação (b)
    x = 5;
    y = 3;
    y *= x + 1;
    printf("-------------------------------\n");
    printf("Situacao B\nX: %i\nY: %i\n", x,y);
    printf("-------------------------------");
    return 0;
};

