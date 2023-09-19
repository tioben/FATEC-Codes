//Instruções
//Codifique a função rodizio(placa), que recebe um número ente 0 e 9 que representa o último dígito da placa de um veículo e exibe o dia em ele está no rodízio.
//Faça um programa para testar sua rotina.

//librarys
#include <stdio.h>
#include <string.h>

//functions
char** rodizio(int n) {
    static char* parList[] = {"segunda-feira", "quarta-feira", "sexta-feira", "domingo"};
    static char* imparList[] = {"terca-feira", "quinta-feira", "sabado", "domingo"};

    return (n % 2 == 0) ? parList : imparList;
}

//main function
int main() {
    int number;

    printf("Digite o ultimo numero da placa do seu carro: ");
    scanf("%i", &number);

    printf("Seu rodizio e: %s, %s, %s e %s\n", rodizio(number)[0],rodizio(number)[1],rodizio(number)[2],rodizio(number)[3]);

    return 0;
}
