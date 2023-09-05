//Dado o último dígito da placa de um carro, informe o dia do seu rodízio. Sugestão: utilize switch/ case.
#include <stdio.h>
int main(){

    int num;

    printf("Digite o ultimo digito da placa do carro: ");
    scanf("%i", &num);

    switch (num%2)
    {
    case 0:
        printf("Hoje voce pode dirigir!");
        break;
    
    default:
        printf("Hoje voce nao pode dirigir!");
        break;
    }

};