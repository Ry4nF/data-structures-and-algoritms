vetor = [5, 3, 8, 4, 2]

# Começa no segundo elemento
for i in range(1, len(vetor)):

    # Guarda o elemento atual
    chave = vetor[i]
    j = i - 1

    # Move elementos maiores para a direita
    while j >= 0 and vetor[j] > chave:
        vetor[j + 1] = vetor[j]
        j -= 1

    # Coloca a chave na posição correta
    vetor[j + 1] = chave

print("Vetor ordenado:", vetor)
