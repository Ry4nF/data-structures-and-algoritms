#include <stdio.h>

void merge(int vetor[], int inicio, int meio, int fim) {
    int temp[fim - inicio + 1];
    int i = inicio;
    int j = meio + 1;
    int k = 0;

    while (i <= meio && j <= fim) {
        if (vetor[i] <= vetor[j])
            temp[k++] = vetor[i++];
        else
            temp[k++] = vetor[j++];
    }

    while (i <= meio)
        temp[k++] = vetor[i++];

    while (j <= fim)
        temp[k++] = vetor[j++];

    for (i = inicio, k = 0; i <= fim; i++, k++)
        vetor[i] = temp[k];
}

void mergeSort(int vetor[], int inicio, int fim) {
    if (inicio < fim) {
        int meio = (inicio + fim) / 2;

        mergeSort(vetor, inicio, meio);
        mergeSort(vetor, meio + 1, fim);

        merge(vetor, inicio, meio, fim);
    }
}

int main() {
    int vetor[] = {5, 3, 8, 4, 2};
    int tamanho = 5;

    mergeSort(vetor, 0, tamanho - 1);

    printf("Vetor ordenado: ");
    for (int i = 0; i < tamanho; i++)
        printf("%d ", vetor[i]);

    return 0;
}
