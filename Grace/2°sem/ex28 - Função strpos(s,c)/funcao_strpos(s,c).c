//Instruções
//Codifique a função strpos(s, c) que devolve a posição da primeira ocorrência do caracter c na string s; ou -1, caso c não exista em s.

#include <stdio.h>

int strpos(const char *s, char c){
    int i =0;
    while(s[i] != '\0'){
        if (s[i] == c){
            return i;
        }
        i++;
    }

    return -1;
}

int main(){
    char string[100];
    char caracter;
    
    printf("Digite uma frase: ");
    scanf("%[^\n]", string);

    printf("\nDigite um caracter que deseja saber a posicao: ");
    scanf(" %c", &caracter);

    int posicao = strpos(string, caracter);

    if(posicao != -1){
        printf("O caracter '%c' foi encontrado na posicao %i.\n", caracter, posicao);
    }else{
        printf("O caracter '%c' nao foi encontrado na string '%s'\n", caracter, string);
    }

    return 0;
}