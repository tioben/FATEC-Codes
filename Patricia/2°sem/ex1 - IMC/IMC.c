#include <stdio.h>

int main() {
    float peso, altura, imc;

    // Solicitar o peso e a altura ao usuário
    printf("Digite o peso (em kg): ");
    scanf("%f", &peso);

    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);

    // Calcular o IMC
    imc = peso / (altura * altura);

    // Exibir o resultado
    printf("O IMC e: %.2f\n", imc);

    return 0;
}