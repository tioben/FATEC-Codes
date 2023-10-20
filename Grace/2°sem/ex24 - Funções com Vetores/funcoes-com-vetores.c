//Instruções
//Dado o seguinte programa, codifique as rotinas
//  obtem() -> obtem as temperaturas de cada dia da semana
//  media() -> calcula a média da temperatura da semana
//  conta() -> quantos dias estao acima da média
//
//#include <stdio.h>
//#define max 7
//int main() {
//      float temp[max], m;
//      obtem(temp, max);
//      m = media(temp, max);
//      printf("Estatística: %d", conta(temp, max, m) );
//      return 0;
//}

#include <stdio.h>

#define max 7

// Função para obter as temperaturas de cada dia da semana
void obtem(float temp[], int n) {
    printf("Digite as temperaturas de cada dia da semana:\n");
    for (int i = 0; i < n; i++) {
        printf("Dia %d: ", i + 1);
        scanf("%f", &temp[i]);
    }
}

// Função para calcular a média da temperatura da semana
float media(float temp[], int n) {
    float soma = 0.0;
    for (int i = 0; i < n; i++) {
        soma += temp[i];
    }
    return soma / n;
}

// Função para contar quantos dias estão acima da média
int conta(float temp[], int n, float media) {
    int acima_da_media = 0;
    for (int i = 0; i < n; i++) {
        if (temp[i] > media) {
            acima_da_media++;
        }
    }
    return acima_da_media;
}

int main() {
    float temp[max], m;
    obtem(temp, max);
    m = media(temp, max);
    printf("Estatística: %d\n", conta(temp, max, m));
    return 0;
}
