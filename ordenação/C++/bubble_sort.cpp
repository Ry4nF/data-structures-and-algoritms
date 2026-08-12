#include <iostream>
using namespace std;

int main() {
    int vetor[] = {5, 3, 8, 4, 2};
    int tamanho = 5;

    // Percorre o vetor várias vezes
    for (int i = 0; i < tamanho - 1; i++) {

        // Compara elementos vizinhos
        for (int j = 0; j < tamanho - 1 - i; j++) {

            // Se estiverem fora de ordem
            if (vetor[j] > vetor[j + 1]) {

                // Faz a troca
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }

    cout << "Vetor ordenado: ";

    for (int i = 0; i < tamanho; i++) {
        cout << vetor[i] << " ";
    }

    return 0;
}
