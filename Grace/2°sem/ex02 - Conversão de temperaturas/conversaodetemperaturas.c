#include <stdio.h>

int main() {
    float temperatura_fahrenheit, temperatura_celsius;

    // Solicitar a temperatura em Fahrenheit ao usuário
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &temperatura_fahrenheit);

    // Calcular a temperatura em Celsius
    temperatura_celsius = (temperatura_fahrenheit - 32) * 5 / 9;

    // Exibir o resultado
    printf("A temperatura em Celsius e: %.2f\n", temperatura_celsius);

    return 0;
}