vetor = [5, 3, 8, 4, 2]

tamanho = len(vetor)

# Começa com metade do tamanho
gap = tamanho // 2

# Continua enquanto o gap for maior que zero
while gap > 0:

    for i in range(gap, tamanho):

        # Guarda o elemento atual
        temp = vetor[i]
        j = i

        # Move elementos maiores
        while j >= gap and vetor[j - gap] > temp:
            vetor[j] = vetor[j - gap]
            j -= gap

        # Coloca o elemento na posição correta
        vetor[j] = temp

    # Divide o gap pela metade
    gap //= 2

print("Vetor ordenado:", vetor)
