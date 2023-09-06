#include <stdio.h>
#include "defines.h"

int main(){
    //pt.1 do desafio - validando se a letra é maiuscula ou minuscula
    char letter;
    printf("--------------------\n");
    printf("Digite uma letra: ");
    scanf(" %c", &letter);

    printf("\nA letra -> %c <- eh maiuscula?: %i", letter, eh_maiuscula(letter));
    printf("\nA letra -> %c <- eh minuscula?: %i", letter, eh_minuscula(letter));
    printf("\n--------------------");

    //pt.2 do desafio - trocando uma letra pra sua versão maiuscula ou minuscula
    char letter2;
    printf("--------------------\n");
    printf("Digite outra letra: ");
    scanf(" %c", &letter2);

    printf("\nA letra -> %c <- em minuscula: %c", letter2, minusculo(letter2));
    printf("\nA letra -> %c <- em maiuscula: %c", letter2, maiusculo(letter2));
    printf("\n--------------------");


    return 0;
}