function particionar(vetor, inicio, fim) {
    let pivo = vetor[fim];
    let i = inicio - 1;

    for (let j = inicio; j < fim; j++) {
        if (vetor[j] < pivo) {
            i++;
            [vetor[i], vetor[j]] = [vetor[j], vetor[i]];
        }
    }

    [vetor[i + 1], vetor[fim]] = [vetor[fim], vetor[i + 1]];

    return i + 1;
}

function quickSort(vetor, inicio, fim) {
    if (inicio < fim) {
        let pivo = particionar(vetor, inicio, fim);

        quickSort(vetor, inicio, pivo - 1);
        quickSort(vetor, pivo + 1, fim);
    }
}

let vetor = [5, 3, 8, 4, 2];

quickSort(vetor, 0, vetor.length - 1);

console.log("Vetor ordenado:", vetor);
