#include <stdio.h>

#define pi 3.1415

int main() {
    float raio, area, perimetro;

    // Solicitar o raio do círculo ao usuário
    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    // Calcular a área e o perímetro
    area = pi * raio * raio;
    perimetro = 2 * pi * raio;

    // Exibir os resultados
    printf("Área do círculo: %.2f\n", area);
    printf("Perímetro do círculo: %.2f\n", perimetro);

    return 0;
}