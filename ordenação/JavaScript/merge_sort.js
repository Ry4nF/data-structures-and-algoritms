function mergeSort(vetor) {
    // Vetor com 0 ou 1 elemento já está ordenado
    if (vetor.length <= 1) {
        return vetor;
    }

    let meio = Math.floor(vetor.length / 2);

    let esquerda = mergeSort(vetor.slice(0, meio));
    let direita = mergeSort(vetor.slice(meio));

    let resultado = [];
    let i = 0;
    let j = 0;

    // Junta as duas metades em ordem
    while (i < esquerda.length && j < direita.length) {
        if (esquerda[i] <= direita[j]) {
            resultado.push(esquerda[i]);
            i++;
        } else {
            resultado.push(direita[j]);
            j++;
        }
    }

    return resultado.concat(esquerda.slice(i), direita.slice(j));
}

let vetor = [5, 3, 8, 4, 2];

vetor = mergeSort(vetor);

console.log("Vetor ordenado:", vetor);
