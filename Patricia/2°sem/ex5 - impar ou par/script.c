#include <stdio.h>

int main(){
    //Dado um inteiro n, informe se n é par ou ímpar usando o operador condicional ternário.

    int num;

    printf("Digite um numero: ");
    scanf("%i", &num);
    printf("%s", (num%2==0)? "Par":"Impar");
    
}