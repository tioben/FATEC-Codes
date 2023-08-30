vetor = [0]*10
for x in range(0, len(vetor)):
    vetor[x] = input("Digite um número: ")

print(vetor)
for x1 in range(0,9):
    for x2 in range (x1+1,10):
        if vetor[x1] > vetor[x2]:
            vetorAx1 = vetor[x1]
            vetor[x1] = vetor[x2]
            vetor[x2] = vetorAx1
            print(vetor)

print(vetor)