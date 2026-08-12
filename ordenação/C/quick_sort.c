#include <stdio.h>

int particionar(int vetor[], int inicio, int fim) {
    int pivo = vetor[fim];
    int i = inicio - 1;

    for (int j = inicio; j < fim; j++) {
        if (vetor[j] < pivo) {
            i++;

            int temp = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = temp;
        }
    }

    int temp = vetor[i + 1];
    vetor[i + 1] = vetor[fim];
    vetor[fim] = temp;

    return i + 1;
}

void quickSort(int vetor[], int inicio, int fim) {
    if (inicio < fim) {
        int pivo = particionar(vetor, inicio, fim);

        quickSort(vetor, inicio, pivo - 1);
        quickSort(vetor, pivo + 1, fim);
    }
}

int main() {
    int vetor[] = {5, 3, 8, 4, 2};
    int tamanho = 5;

    quickSort(vetor, 0, tamanho - 1);

    printf("Vetor ordenado: ");
    for (int i = 0; i < tamanho; i++)
        printf("%d ", vetor[i]);

    return 0;
}
