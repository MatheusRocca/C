#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

void gerar_vetor(int v[], int n) {
    srand(time(NULL));
    int inicial = 1;
    int sorteado;

    for (int i = 0; i < n; i++) {
        sorteado = inicial + rand() % (inicial * 2);
        v[i] = sorteado;
        inicial = sorteado + 1; // garante que o vetor fique ordenado
    }
}

/*
    Busca o elemento 'e' no vetor 'v', retornando o índice
    da posição da primeira ocorrência.

    Retorna -1 se o elemento não está presente no vetor.
*/
int busca_binaria(int v[], int n, int e) {
    int indice_meio;
    int menor_indice = 0;
    int maior_indice = n - 1;

    while (maior_indice >= menor_indice) {
        indice_meio = (maior_indice + menor_indice) / 2;

        if (v[indice_meio] == e)
            return indice_meio;
        else if (v[indice_meio] > e)
            maior_indice = indice_meio - 1;
        else
            menor_indice = indice_meio + 1;
    }

    return -1;
}

void imprimir(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main() {
    int n = 10;
    int dados[10];
    bool sair = false;
    int op;

    // Gera 10 elementos ordenados
    gerar_vetor(dados, n);

    while (!sair) {
        printf("## Dados: ");
        imprimir(dados, n);

        printf("## Elemento a ser buscado de forma binária (ou -1 para sair): ");
        scanf("%d", &op);

        if (op == -1) {
            sair = true;
        } else {
            int indice = busca_binaria(dados, n, op);
            printf("## Posição em que o elemento foi encontrado: %d\n\n", indice);
        }
    }

    printf("\n## Fim!\n");
    return 0;
}
