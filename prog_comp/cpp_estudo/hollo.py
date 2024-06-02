

num = int(input())

nomes = input().split()
chatos = input().split()

lista_f = []
i = 0

j = 0
while (num != 0):
    if chatos[i] == nomes[j]:
        lista_f.append(chatos[i])
        nomes.pop(0)
        chatos.pop(0)
    else:
        lista_f.append(chatos[i])
        nomes.pop(0)
    num -= 1

lista_f = ' '.join(lista_f)
print(lista_f)
