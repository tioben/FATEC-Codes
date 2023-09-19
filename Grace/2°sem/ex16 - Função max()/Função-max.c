//Instruções
//Codifique um programa de teste para a rotina max( ).

//double max (double a, double b) {
//  if ( a>b )     
//        return a;       /* interrompe a função*/
//  return b;
//}

//librarys
#include <stdio.h>

//functions
int max (int a, int b){
        return a>b? a:b;
    };

//main code
int main(){

    int a, b;
    printf("Digite um numero: ");
    scanf("%i", &a);
    printf("Digite um numero: ");
    scanf("%i", &b);

    printf("%i", max(a,b));


    return 0;
};