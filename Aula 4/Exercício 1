#include <stdio.h>
#include <stdbool.h>

bool esta_em_ordem_crescente(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        if (vetor[i] > vetor[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int vetor[] = {1, 3, 5, 7, 9};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    if (esta_em_ordem_crescente(vetor, tamanho)) {
        printf("O vetor está em ordem crescente.\n");
    } else {
        printf("O vetor NÃO está em ordem crescente.\n");
    }

    return 0;
}
