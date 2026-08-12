def particionar(vetor, inicio, fim):
    pivo = vetor[fim]
    i = inicio - 1

    for j in range(inicio, fim):
        if vetor[j] < pivo:
            i += 1
            vetor[i], vetor[j] = vetor[j], vetor[i]

    vetor[i + 1], vetor[fim] = vetor[fim], vetor[i + 1]

    return i + 1


def quick_sort(vetor, inicio, fim):
    if inicio < fim:
        pivo = particionar(vetor, inicio, fim)

        quick_sort(vetor, inicio, pivo - 1)
        quick_sort(vetor, pivo + 1, fim)


vetor = [5, 3, 8, 4, 2]

quick_sort(vetor, 0, len(vetor) - 1)

print("Vetor ordenado:", vetor)
