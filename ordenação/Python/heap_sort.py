def heapify(vetor, tamanho, raiz):
    maior = raiz
    esquerda = 2 * raiz + 1
    direita = 2 * raiz + 2

    if esquerda < tamanho and vetor[esquerda] > vetor[maior]:
        maior = esquerda

    if direita < tamanho and vetor[direita] > vetor[maior]:
        maior = direita

    if maior != raiz:
        vetor[raiz], vetor[maior] = vetor[maior], vetor[raiz]

        heapify(vetor, tamanho, maior)


def heap_sort(vetor):
    tamanho = len(vetor)

    # Cria o Max-Heap
    for i in range(tamanho // 2 - 1, -1, -1):
        heapify(vetor, tamanho, i)

    # Move o maior elemento para o final
    for i in range(tamanho - 1, 0, -1):
        vetor[0], vetor[i] = vetor[i], vetor[0]

        heapify(vetor, i, 0)


vetor = [5, 3, 8, 4, 2]

heap_sort(vetor)

print("Vetor ordenado:", vetor)
