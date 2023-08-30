def fatorial(x):
    xfat = 1
    for x in range(x, 0, -1):
        xfat = xfat * x
    return xfat

n = int(input("Quantidade de numeros a combinar: "))
k = int(input("Quantidade de numeros para agrupamento: "))
dif = n - k
c = fatorial(n) // ((fatorial(k) * fatorial(dif)))

print(f"A quantidade de combinacoes possiveis para {n} números combinados {k} a {k}, é: {c}")

