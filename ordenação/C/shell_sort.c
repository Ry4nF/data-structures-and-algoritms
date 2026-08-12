#include <stdio.h>

int main() {
    int vetor[] = {5, 3, 8, 4, 2};
    int tamanho = 5;

    // Começa com metade do tamanho do vetor
    int gap = tamanho / 2;

    // Continua enquanto o gap for maior que zero
    while (gap > 0) {

        for (int i = gap; i < tamanho; i++) {
            int temp = vetor[i];
            int j = i;

            // Move elementos maiores para frente
            while (j >= gap && vetor[j - gap] > temp) {
                vetor[j] = vetor[j - gap];
                j -= gap;
            }

            // Coloca o elemento na posição correta
            vetor[j] = temp;
        }

        // Diminui o gap pela metade
        gap = gap / 2;
    }

    printf("Vetor ordenado: ");

    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
