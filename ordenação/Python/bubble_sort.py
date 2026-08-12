vetor = [5, 3, 8, 4, 2]

tamanho = len(vetor)

# Percorre o vetor várias vezes
for i in range(tamanho - 1):

    # Compara elementos vizinhos
    for j in range(tamanho - 1 - i):

        # Se estiverem fora de ordem
        if vetor[j] > vetor[j + 1]:

            # Troca os elementos
            vetor[j], vetor[j + 1] = vetor[j + 1], vetor[j]

print("Vetor ordenado:", vetor)
