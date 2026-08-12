function heapify(vetor, tamanho, raiz) {
    let maior = raiz;
    let esquerda = 2 * raiz + 1;
    let direita = 2 * raiz + 2;

    if (esquerda < tamanho && vetor[esquerda] > vetor[maior]) {
        maior = esquerda;
    }

    if (direita < tamanho && vetor[direita] > vetor[maior]) {
        maior = direita;
    }

    if (maior !== raiz) {
        [vetor[raiz], vetor[maior]] = [vetor[maior], vetor[raiz]];

        heapify(vetor, tamanho, maior);
    }
}

function heapSort(vetor) {
    let tamanho = vetor.length;

    // Cria o Max-Heap
    for (let i = Math.floor(tamanho / 2) - 1; i >= 0; i--) {
        heapify(vetor, tamanho, i);
    }

    // Move o maior elemento para o final
    for (let i = tamanho - 1; i > 0; i--) {
        [vetor[0], vetor[i]] = [vetor[i], vetor[0]];

        heapify(vetor, i, 0);
    }
}

let vetor = [5, 3, 8, 4, 2];

heapSort(vetor);

console.log("Vetor ordenado:", vetor);
