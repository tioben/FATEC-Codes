//Instruções
//Escreva um programa que leia uma cadeia de caracteres e imprima a mesma de trás pra frente. Sugestão: Utilize a função strlen() para saber o tamanho da frase.

#include <stdio.h>
#include <string.h>

int main(){
    char frase[100];

    printf("Digite uma frase: ");
    scanf("%[^\n]", frase);

    int tamanho = strlen(frase);

    printf("\nFrase ao contrario: ");
    for (int i=tamanho-1; i>=0; i--){
        printf("%c", frase[i]);
    }

    return 0;
}