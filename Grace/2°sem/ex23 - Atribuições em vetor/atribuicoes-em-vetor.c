//Instruções
//Dado um vetor w com 9 elementos inteiros e um inteiro i=5, represente os valores em w após as seguintes atribuições:
//w[0] = 17;
//w[i/2] = 9;
//w[2*i-2] = 95;
//w[i-1] = w[8]/2;
//w[i] = w[2];
//w[i+1] = w[i]+ w[i-1];
//w[w[2]-2] = 78;
//w[1] = w[w[i]-1];

#include <stdio.h>

int main() {
    int w[9];
    int i = 5;

    w[0] = 17;
    w[i/2] = 9;
    w[2*i-2] = 95;
    w[i-1] = w[8] / 2;
    w[i] = w[2];
    w[i+1] = w[i] + w[i-1];
    w[w[2]-2] = 78;
    w[1] = w[w[i]-1];

    for (int j = 0; j < 9; j++) {
        printf("w[%d] = %d\n", j, w[j]);
    }

    return 0;
}
