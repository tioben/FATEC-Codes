#define eh_minuscula(letra) (('a' <= letra && letra <= 'z') ? 1 : 0) 
#define eh_maiuscula(letra) (('A' <= letra && letra <= 'Z') ? 1 : 0) 
#define maiusculo(letra) (eh_minuscula(letra) ? (letra - 'a' + 'A') : letra)
#define minusculo(letra) (eh_maiuscula(letra) ? (letra + 'a' - 'A') : letra)
