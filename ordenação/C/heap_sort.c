#include <stdio.h>

void heapify(int vetor[], int tamanho, int raiz) {
    int maior = raiz;
    int esquerda = 2 * raiz + 1;
    int direita = 2 * raiz + 2;

    if (esquerda < tamanho && vetor[esquerda] > vetor[maior])
        maior = esquerda;

    if (direita < tamanho && vetor[direita] > vetor[maior])
        maior = direita;

    if (maior != raiz) {
        int temp = vetor[raiz];
        vetor[raiz] = vetor[maior];
        vetor[maior] = temp;

        heapify(vetor, tamanho, maior);
    }
}

void heapSort(int vetor[], int tamanho) {
    // Cria o Max-Heap
    for (int i = tamanho / 2 - 1; i >= 0; i--)
        heapify(vetor, tamanho, i);

    // Move o maior elemento para o final
    for (int i = tamanho - 1; i > 0; i--) {
        int temp = vetor[0];
        vetor[0] = vetor[i];
        vetor[i] = temp;

        heapify(vetor, i, 0);
    }
}

int main() {
    int vetor[] = {5, 3, 8, 4, 2};
    int tamanho = 5;

    heapSort(vetor, tamanho);

    printf("Vetor ordenado: ");
    for (int i = 0; i < tamanho; i++)
        printf("%d ", vetor[i]);

    return 0;
}
