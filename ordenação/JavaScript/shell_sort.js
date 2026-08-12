let vetor = [5, 3, 8, 4, 2];

let tamanho = vetor.length;

// Começa com metade do tamanho
let gap = Math.floor(tamanho / 2);

// Continua enquanto o gap for maior que zero
while (gap > 0) {

    for (let i = gap; i < tamanho; i++) {

        // Guarda o elemento atual
        let temp = vetor[i];
        let j = i;

        // Move elementos maiores
        while (j >= gap && vetor[j - gap] > temp) {
            vetor[j] = vetor[j - gap];
            j -= gap;
        }

        // Coloca o elemento na posição correta
        vetor[j] = temp;
    }

    // Divide o gap pela metade
    gap = Math.floor(gap / 2);
}

console.log("Vetor ordenado:", vetor);
