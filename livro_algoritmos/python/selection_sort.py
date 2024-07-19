lista=[7, 9, 3, 1, 0, 4]
def selection_sort(lista: list[int]) -> None:
    tamanho_lista = len(lista)
    for j in range(tamanho_lista-1):
        min_value = j
        for i in range(j + 1, tamanho_lista):
            if lista[min_value] > lista[i]:
                min_value = i
        lista[j], lista[min_value] = lista[min_value], lista[j]
    print(lista)
selection_sort(lista)