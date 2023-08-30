l = [0]*6
for x in range(0,6):
    l[x] = input("Digite um número: ")
for x1 in range (0,3):
    for x2 in range (x1+1,4):
        for x3 in range (x2+1,5):
            for x4 in range (x3+1,6):
                print(l[x1], "", l[x2], "", l[x3], "", l[x4])