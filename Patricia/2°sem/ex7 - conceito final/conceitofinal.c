//Escreva um programa em C que leia a quantidade de faltas de um aluno e sua média e informe seu conceito final, sendo:
//Faltas > 5 -> conceito F
//Faltas <=5 e Média <6 -> conceito C
//Faltas <=5 e 6<= Média <7.5 -> conceito B
//Faltas <=5 e 7.5<= Média <9 -> conceito A
//Faltas <=5 e Média >= 9 -> conceito E

#include <stdio.h>

int main() {
    int faltas;
    float media;

    printf("Digite as faltas do aluno: ");
    scanf("%i", &faltas);
    printf("Digite a media do aluno: ");
    scanf("%f", &media);

    if (faltas > 5) {
        printf("Conceito F");

    } else if (faltas <= 5 && media < 6) {
        printf("Conceito C");

    } else if (faltas <= 5 && (6 <= media && media < 7.5)) {
        printf("Conceito B");

    } else if (faltas <= 5 && (7.5 <= media && media < 9)) {
        printf("Conceito A");

    } else if (faltas <= 5 && media >= 9) {
        printf("Conceito E");
    }

return 0;
}
