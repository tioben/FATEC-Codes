//Instruções
//Crie o arquivo boolean.h com as definições necessárias para compor expressões lógicas, a exemplo do programa abaixo, produzindo na saída um valor booleano.
//O programa abaixo produziria: verdadeiro falso verdadeiro.

#include <stdio.h>
#include "boolean.h"

int main() {
  printf("%s \n", bool(nao(false))); 
  printf("%s \n", bool(e(false, true))); 
  printf("%s \n", bool(ou(true, false))); 
  return 0;
}
