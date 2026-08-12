#include <iostream>
#include <vector>
using namespace std;

void merge(int vetor[], int inicio, int meio, int fim) {
    vector<int> temp;

    int i = inicio;
    int j = meio + 1;

    while (i <= meio && j <= fim) {
        if (vetor[i] <= vetor[j])
            temp.push_back(vetor[i++]);
        else
            temp.push_back(vetor[j++]);
    }

    while (i <= meio)
        temp.push_back(vetor[i++]);

    while (j <= fim)
        temp.push_back(vetor[j++]);

    for (int k = 0; k < (int)temp.size(); k++)
        vetor[inicio + k] = temp[k];
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

    cout << "Vetor ordenado: ";
    for (int i = 0; i < tamanho; i++)
        cout << vetor[i] << " ";

    return 0;
}
