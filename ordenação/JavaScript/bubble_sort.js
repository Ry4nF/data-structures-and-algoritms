let vetor = [5, 3, 8, 4, 2];

let tamanho = vetor.length;

// Percorre o vetor várias vezes
for (let i = 0; i < tamanho - 1; i++) {

    // Compara elementos vizinhos
    for (let j = 0; j < tamanho - 1 - i; j++) {

        // Se estiverem fora de ordem
        if (vetor[j] > vetor[j + 1]) {

            // Faz a troca
            let temp = vetor[j];
            vetor[j] = vetor[j + 1];
            vetor[j + 1] = temp;
        }
    }
}

console.log("Vetor ordenado:", vetor);
