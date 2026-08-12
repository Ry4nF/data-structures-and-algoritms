let vetor = [5, 3, 8, 4, 2];

// Começa no segundo elemento
for (let i = 1; i < vetor.length; i++) {

    // Guarda o elemento atual
    let chave = vetor[i];
    let j = i - 1;

    // Move elementos maiores para a direita
    while (j >= 0 && vetor[j] > chave) {
        vetor[j + 1] = vetor[j];
        j--;
    }

    // Coloca o elemento na posição correta
    vetor[j + 1] = chave;
}

console.log("Vetor ordenado:", vetor);
