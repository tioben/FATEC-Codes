//Instruções
//Defina a estrutura PESSOA com:
//Nome
//Telefone
//Data de nascimento
//Antes, não esqueça de definir a estrutura DATA.
//Implemente um programa que solicite os dados do seu melhor amigo; armazene numa variável do tipo PESSOA.
//Em seguida imprima os dados desta variável na tela

#include <stdio.h>

// Definindo a estrutura DATA para armazenar a data de nascimento
struct DATA {
    int dia;
    int mes;
    int ano;
};

// Definindo a estrutura PESSOA que inclui o nome, telefone e a data de nascimento
struct PESSOA {
    char nome[50];
    char telefone[15];
    struct DATA data_nascimento;
};

int main() {
    struct PESSOA melhor_amigo;

    printf("Digite o nome do seu melhor amigo: ");
    scanf("%s", melhor_amigo.nome);

    printf("Digite o telefone do seu melhor amigo: ");
    scanf("%s", melhor_amigo.telefone);

    printf("Digite a data de nascimento do seu melhor amigo (DD MM AAAA): ");
    scanf("%d %d %d", &melhor_amigo.data_nascimento.dia, &melhor_amigo.data_nascimento.mes, &melhor_amigo.data_nascimento.ano);

    // Exibindo os dados do seu melhor amigo
    printf("\nDados do seu melhor amigo:\n");
    printf("Nome: %s\n", melhor_amigo.nome);
    printf("Telefone: %s\n", melhor_amigo.telefone);
    printf("Data de Nascimento: %02d/%02d/%04d\n", melhor_amigo.data_nascimento.dia, melhor_amigo.data_nascimento.mes, melhor_amigo.data_nascimento.ano);

    return 0;
}