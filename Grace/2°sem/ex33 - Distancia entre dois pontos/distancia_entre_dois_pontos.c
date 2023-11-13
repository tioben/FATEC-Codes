//Instruções
//Defina um tipo de estrutura nomeada para representar pontos no plano através de suas coordenadas cartesianas (x, y).
//Em seguida, crie uma função para calcular a distância entre dois pontos e codifique um programa para testar seu funcionamento.

#include <stdio.h>
#include <math.h>

struct Ponto {
    float x;
    float y;
};

float calcularDistancia(struct Ponto ponto1, struct Ponto ponto2) {
    return sqrt(pow(ponto2.x - ponto1.x, 2) + pow(ponto2.y - ponto1.y, 2));
}

int main() {
    struct Ponto pontoA, pontoB;

    printf("Digite as coordenadas do ponto A (x y): ");
    scanf("%f %f", &pontoA.x, &pontoA.y);

    printf("Digite as coordenadas do ponto B (x y): ");
    scanf("%f %f", &pontoB.x, &pontoB.y);

    float distancia = calcularDistancia(pontoA, pontoB);

    printf("A distância entre os pontos A e B é: %.2f\n", distancia);

    return 0;
}
