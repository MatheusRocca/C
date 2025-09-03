#include <stdio.h>
#include <stdbool.h>

void imprimir_intersecao(int A[], int tamanhoA, int B[], int tamanhoB) {
    printf("A ∩ B = { ");

    for (int i = 0; i < tamanhoA; i++) {
        bool encontrado = false;
        for (int j = 0; j < tamanhoB; j++) {
            if (A[i] == B[j]) {
                encontrado = true;
                break;
            }
        }
        if (encontrado) {
            printf("%d ", A[i]);
        }
    }

    printf("}\n");
}

int main() {
    int A1[] = {7, 2, 5, 8, 4};
    int B1[] = {4, 2, 9, 5};

    int A2[] = {3, 9, 11};
    int B2[] = {2, 6, 1};

    printf("Exemplo 1:\n");
    imprimir_intersecao(A1, 5, B1, 4);

    printf("Exemplo 2:\n");
    imprimir_intersecao(A2, 3, B2, 3);

    return 0;
}
