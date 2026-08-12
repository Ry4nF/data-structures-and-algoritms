#include <iostream>
using namespace std;

int main() {
    int vetor[] = {5, 3, 8, 4, 2};
    int tamanho = 5;

    // Começa no segundo elemento
    for (int i = 1; i < tamanho; i++) {

        // Elemento que será inserido
        int chave = vetor[i];
        int j = i - 1;

        // Move elementos maiores para a direita
        while (j >= 0 && vetor[j] > chave) {
            vetor[j + 1] = vetor[j];
            j--;
        }

        // Coloca a chave na posição correta
        vetor[j + 1] = chave;
    }

    cout << "Vetor ordenado: ";

    for (int i = 0; i < tamanho; i++) {
        cout << vetor[i] << " ";
    }

    return 0;
}
