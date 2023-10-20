//Instruções
//Função recursiva que calcule potência de a elevado a b (ab) usando multiplicação, sendo a um double e b um inteiro maior ou igual a zero (unsigned). Use o programa abaixo para testar sua função.
//int main() {
//      double a;
//     unsigned int b;
//      printf(“\nDigite a e b:");
//     scanf("%lf %u", &a, &b);
//      printf("\n%.2lf elevado a %u: %.2lf", a, b, pot(a, b));
//      return 0;
//}

#include <stdio.h>

double pot(double a, unsigned int b);

int main() {
    double a;
    unsigned int b;

    printf("Digite a e b: ");
    scanf("%lf %u", &a, &b);

    printf("%.2lf elevado a %u: %.2lf\n", a, b, pot(a, b));

    return 0;
}

double pot(double a, unsigned int b) {
    // Caso base: quando b é 0, a^0 é 1.
    if (b == 0) {
        return 1.0;
    }
    
    // Caso recursivo: a^b = a * a^(b-1)
    return a * pot(a, b - 1);
}