lista= [9, 2, 1, 8, 10, 15]
def insertion_sort(lista:list[int]) -> None:
    i = 1
    while i < len(lista):
        chave = lista[i]
        j = i
        while j > 0 and lista[j-1] > chave:
            lista[j]= lista[j-1]
            j -=1
        lista[j] = chave
        i+=1
        print(lista)
insertion_sort(lista)