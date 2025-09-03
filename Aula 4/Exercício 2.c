#include <stdio.h>

void inverter_vetor(int vetor[], int tamanho) {
    int temp;
    for (int i = 0; i < tamanho / 2; i++) {
        temp = vetor[i];
        vetor[i] = vetor[tamanho - 1 - i];
        vetor[tamanho - 1 - i] = temp;
    }
}

int main() {
    int V[5] = {4, 9, 10, 8, 6};
    int tamanho = 5;

    printf("Vetor original: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", V[i]);
    }
    printf("\n");

    inverter_vetor(V, tamanho);

    printf("Vetor invertido: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", V[i]);
    }
    printf("\n");

    return 0;
}
