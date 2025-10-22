#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define TAMANHO_MAX 10000

void preencher_aleatorio(int array[], int tamanho) {
    for (int pos = 0; pos < tamanho; pos++) {
        array[pos] = rand() % (tamanho * 10);
    }
}

void preencher_crescente(int array[], int tamanho) {
    for (int pos = 0; pos < tamanho; pos++) {
        array[pos] = pos;
    }
}

void preencher_decrescente(int array[], int tamanho) {
    for (int pos = 0; pos < tamanho; pos++) {
        array[pos] = tamanho - pos;
    }
}

int selection_sort(int array[], int tamanho) {
    int cont_comparacoes = 0;
    int i, j, indice_minimo, temp;

    for (i = 0; i < tamanho - 1; i++) {
        indice_minimo = i;
        for (j = i + 1; j < tamanho; j++) {
            cont_comparacoes++;
            if (array[j] < array[indice_minimo]) {
                indice_minimo = j;
            }
        }
        if (indice_minimo != i) {
            temp = array[i];
            array[i] = array[indice_minimo];
            array[indice_minimo] = temp;
        }
    }
    return cont_comparacoes;
}

int insertion_sort(int array[], int tamanho) {
    int cont_comparacoes = 0;
    int i, chave, j;

    for (i = 1; i < tamanho; i++) {
        chave = array[i];
        j = i - 1;

        while (j >= 0) {
            cont_comparacoes++;
            if (array[j] > chave) {
                array[j + 1] = array[j];
                j = j - 1;
            } else {
                break;
            }
        }
        array[j + 1] = chave;
    }
    return cont_comparacoes;
}

int main() {
    srand(time(NULL));

    int lista_tamanhos[] = {10, 20, 100, 200, 1000, 2000, 10000};
    int total_tamanhos = sizeof(lista_tamanhos) / sizeof(lista_tamanhos[0]);
    int array_original[TAMANHO_MAX];
    int array_copia[TAMANHO_MAX];

    printf("Elementos\tAleatorios\tCrescente\tDecrescente\n");

    for (int idx = 0; idx < total_tamanhos; idx++) {
        int tamanho_atual = lista_tamanhos[idx];

        preencher_aleatorio(array_original, tamanho_atual);
        memcpy(array_copia, array_original, tamanho_atual * sizeof(int));
        int comp_aleatorio = selection_sort(array_copia, tamanho_atual);

        preencher_crescente(array_original, tamanho_atual);
        memcpy(array_copia, array_original, tamanho_atual * sizeof(int));
        int comp_crescente = selection_sort(array_copia, tamanho_atual);

        preencher_decrescente(array_original, tamanho_atual);
        memcpy(array_copia, array_original, tamanho_atual * sizeof(int));
        int comp_decrescente = selection_sort(array_copia, tamanho_atual);

        printf("%d\t\t%d\t\t%d\t\t%d\n", tamanho_atual, comp_aleatorio, comp_crescente, comp_decrescente);
    }

    return 0;
}
