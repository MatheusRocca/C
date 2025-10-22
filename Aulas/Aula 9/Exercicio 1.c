#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubble_sort(int vetor[], int tamanho, long *contador) {
    int i, j, temporario;
    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - 1 - i; j++) {
            (*contador)++;
            if (vetor[j] > vetor[j + 1]) {
                temporario = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temporario;
            }
        }
    }
}

void preencher_aleatorio(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++)
        vetor[i] = rand() % 1000;
}

void preencher_crescente(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++)
        vetor[i] = i;
}

void preencher_decrescente(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++)
        vetor[i] = tamanho - i;
}

int main() {
    int lista_tamanhos[] = {10, 20, 100, 200, 1000, 2000, 10000};
    int quantidade_tamanhos = 7;

    srand(time(NULL));

    printf("Tamanho\tAleatorio\tCrescente\tDecrescente\n");

    for (int indice = 0; indice < quantidade_tamanhos; indice++) {
        int tamanho_atual = lista_tamanhos[indice];
        int *vetor_teste = malloc(tamanho_atual * sizeof(int));
        long contador_operacoes;

        preencher_aleatorio(vetor_teste, tamanho_atual);
        contador_operacoes = 0;
        bubble_sort(vetor_teste, tamanho_atual, &contador_operacoes);
        long operacoes_aleatorio = contador_operacoes;

        preencher_crescente(vetor_teste, tamanho_atual);
        contador_operacoes = 0;
        bubble_sort(vetor_teste, tamanho_atual, &contador_operacoes);
        long operacoes_crescente = contador_operacoes;

        preencher_decrescente(vetor_teste, tamanho_atual);
        contador_operacoes = 0;
        bubble_sort(vetor_teste, tamanho_atual, &contador_operacoes);
        long operacoes_decrescente = contador_operacoes;

        printf("%d\t%ld\t\t%ld\t\t%ld\n", tamanho_atual, operacoes_aleatorio, operacoes_crescente, operacoes_decrescente);

        free(vetor_teste);
    }

    return 0;
}
