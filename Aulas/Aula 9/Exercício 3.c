#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMANHO_MAXIMO 10000

void preencher_aleatorio(int vetor[], int tamanho) {
    for (int indice = 0; indice < tamanho; indice++) {
        vetor[indice] = rand() % (tamanho * 10);
    }
}

void preencher_crescente(int vetor[], int tamanho) {
    for (int indice = 0; indice < tamanho; indice++) {
        vetor[indice] = indice;
    }
}

void preencher_decrescente(int vetor[], int tamanho) {
    for (int indice = 0; indice < tamanho; indice++) {
        vetor[indice] = tamanho - indice;
    }
}

int selection_sort(int vetor[], int tamanho) {
    int contador_comparacoes = 0;
    int i, j, indice_minimo, temporario;

    for (i = 0; i < tamanho - 1; i++) {
        indice_minimo = i;
        for (j = i + 1; j < tamanho; j++) {
            contador_comparacoes++;
            if (vetor[j] < vetor[indice_minimo]) {
                indice_minimo = j;
            }
        }
        if (indice_minimo != i) {
            temporario = vetor[i];
            vetor[i] = vetor[indice_minimo];
            vetor[indice_minimo] = temporario;
        }
    }
    return contador_comparacoes;
}

int main() {
    srand(time(NULL));

    int lista_tamanhos[] = {10, 20, 100, 200, 1000, 2000, 10000};
    int quantidade_tamanhos = sizeof(lista_tamanhos) / sizeof(lista_tamanhos[0]);
    int vetor_teste[TAMANHO_MAXIMO];

    printf("Elementos\tAleatorios\tCrescente\tDecrescente\n");

    for (int indice_tamanho = 0; indice_tamanho < quantidade_tamanhos; indice_tamanho++) {
        int tamanho_atual = lista_tamanhos[indice_tamanho];

        preencher_aleatorio(vetor_teste, tamanho_atual);
        int comparacoes_aleatorio = selection_sort(vetor_teste, tamanho_atual);

        preencher_crescente(vetor_teste, tamanho_atual);
        int comparacoes_crescente = selection_sort(vetor_teste, tamanho_atual);

        preencher_decrescente(vetor_teste, tamanho_atual);
        int comparacoes_decrescente = selection_sort(vetor_teste, tamanho_atual);

        printf("%d\t\t%d\t\t%d\t\t%d\n", tamanho_atual, comparacoes_aleatorio, comparacoes_crescente, comparacoes_decrescente);
    }

    return 0;
}
