#ifndef BOOLEAN_H
#define BOOLEAN_H

// Definindo valores booleanos
#define true 1
#define false 0

// Definindo macros para operações lógicas
#define nao(x) (!(x))
#define e(x, y) ((x) && (y))
#define ou(x, y) ((x) || (y))

// Definindo uma macro para converter valores booleanos em strings
#define bool(a) ((a) ? "verdadeiro" : "falso")

#endif
