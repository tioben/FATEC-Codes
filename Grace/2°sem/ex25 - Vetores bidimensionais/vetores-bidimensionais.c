//Instruções
//Altere o seguinte programa:
// int main(){
//  float A[10][3]; int i, j; // Declaração variáveis
//  for (i=0; i<10; i++){    // Percorre linhas para digitação de notas
//     for (j=0; j<2; j++){ // Percorre colunas 0 e 1 para ler notas
//                printf ("Aluno %d - Nota %d“, i+1 , j+1);
//                scanf (“%f”, &A[i][j]);   
//       }
//       A[i][2] = (A[i][0] + A[i][1])/2; // média da linha i
//   }
//   for (i=0; i<10; i++){      //Percorre linhas para impressão
//       printf(“\n”);
//       for(j=0; j<3; j++) // Percorre colunas para cada linha i
//              printf(“%.2f”, A[i][j] "\t“); // imprime as notas
//    }
//  return 0;
//}
//O programa, além de:
//Ler as 2 notas dos 10 alunos de uma turma
//Calcular e armazenar a média de cada aluno;
//Deve:
//Calcular também a média da turma;
//
//Ao final, imprima:
//A média de cada aluno;
//Se o aluno está na média, acima ou abaixo;

#include <stdio.h>

int main() {
    float A[10][3]; // Declaração de variáveis
    int i, j;

    // Loop para ler notas de 10 alunos
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 2; j++) {
            printf("Aluno %d - Nota %d: ", i + 1, j + 1);
            scanf("%f", &A[i][j]);
        }

        // Cálculo da média do aluno (terceira coluna)
        A[i][2] = (A[i][0] + A[i][1]) / 2;
    }

    // Cálculo da média da turma
    float mediaTurma = 0.0;
    for (i = 0; i < 10; i++) {
        mediaTurma += A[i][2];
    }
    mediaTurma /= 10;

    // Impressão das notas e verificação da situação do aluno
    for (i = 0; i < 10; i++) {
        printf("\nAluno %d - Nota 1: %.2f\tNota 2: %.2f\tMédia: %.2f\t", i + 1, A[i][0], A[i][1], A[i][2]);

        if (A[i][2] > mediaTurma) {
            printf("Acima da média da turma\n");
        } else if (A[i][2] < mediaTurma) {
            printf("Abaixo da média da turma\n");
        } else {
            printf("Na média da turma\n");
        }
    }

    // Impressão da média da turma
    printf("\nMédia da turma: %.2f\n", mediaTurma);

    return 0;
}
