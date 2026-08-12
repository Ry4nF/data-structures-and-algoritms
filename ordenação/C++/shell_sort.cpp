#include <iostream>
using namespace std;

int main() {
    int vetor[] = {5, 3, 8, 4, 2};
    int tamanho = 5;

    // Começa com metade do tamanho
    int gap = tamanho / 2;

    // Continua até o gap chegar em zero
    while (gap > 0) {

        for (int i = gap; i < tamanho; i++) {
            int temp = vetor[i];
            int j = i;

            // Move elementos maiores
            while (j >= gap && vetor[j - gap] > temp) {
                vetor[j] = vetor[j - gap];
                j -= gap;
            }

            // Coloca o elemento na posição correta
            vetor[j] = temp;
        }

        // Divide o gap pela metade
        gap = gap / 2;
    }

    cout << "Vetor ordenado: ";

    for (int i = 0; i < tamanho; i++) {
        cout << vetor[i] << " ";
    }

    return 0;
}
