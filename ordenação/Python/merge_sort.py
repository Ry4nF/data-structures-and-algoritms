def merge_sort(vetor):
    # Vetor com 0 ou 1 elemento já está ordenado
    if len(vetor) <= 1:
        return vetor

    meio = len(vetor) // 2

    esquerda = merge_sort(vetor[:meio])
    direita = merge_sort(vetor[meio:])

    resultado = []

    i = 0
    j = 0

    # Junta as duas metades em ordem
    while i < len(esquerda) and j < len(direita):
        if esquerda[i] <= direita[j]:
            resultado.append(esquerda[i])
            i += 1
        else:
            resultado.append(direita[j])
            j += 1

    resultado.extend(esquerda[i:])
    resultado.extend(direita[j:])

    return resultado


vetor = [5, 3, 8, 4, 2]

vetor = merge_sort(vetor)

print("Vetor ordenado:", vetor)
