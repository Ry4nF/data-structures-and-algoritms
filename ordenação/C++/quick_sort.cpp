#include <iostream>
using namespace std;

int particionar(int vetor[], int inicio, int fim) {
    int pivo = vetor[fim];
    int i = inicio - 1;

    for (int j = inicio; j < fim; j++) {
        if (vetor[j] < pivo) {
            i++;
            swap(vetor[i], vetor[j]);
        }
    }

    swap(vetor[i + 1], vetor[fim]);
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

    cout << "Vetor ordenado: ";
    for (int i = 0; i < tamanho; i++)
        cout << vetor[i] << " ";

    return 0;
}
