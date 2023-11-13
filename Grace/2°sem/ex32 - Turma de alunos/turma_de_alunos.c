//Instruções
//Elabore um programa que leia, armazene e exiba os dados de uma turma de 5 alunos.
//Cada Aluno deve informar:
//Nome (char[21])
//Matricula (char[9])
//Média final (float)
//Para isso, codifique e utilize as seguintes rotinas:
//LeAlunos(t[], n): solicita ao usuário que digite os dados de n alunos e armazena em t.
//Imprime(t[], n): exibe na tela os dados armazenados em t.

#include <stdio.h>

struct Aluno {
    char nome[21];
    char matricula[9];
    float mediaFinal;
};

void LeAlunos(struct Aluno t[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", t[i].nome);

        printf("Digite a matricula do aluno %d: ", i + 1);
        scanf("%s", t[i].matricula);

        printf("Digite a media final do aluno %d: ", i + 1);
        scanf("%f", &t[i].mediaFinal);
    }
}

void Imprime(struct Aluno t[], int n) {
    printf("\nDados dos alunos:\n");
    for (int i = 0; i < n; i++) {
        printf("Aluno %d\n", i + 1);
        printf("Nome: %s\n", t[i].nome);
        printf("Matricula: %s\n", t[i].matricula);
        printf("Media final: %.2f\n", t[i].mediaFinal);
        printf("\n");
    }
}

int main() {
    struct Aluno turma[5];
    int numeroAlunos = 5;

    LeAlunos(turma, numeroAlunos);
    Imprime(turma, numeroAlunos);

    return 0;
}
