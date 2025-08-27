#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int gerarNumero() {
    return rand() % 100 + 1;
}

int pedirPalpite() {
    int palpite;
    do {
        printf("Digite seu palpite (1 a 100): ");
        scanf("%d", &palpite);
        if (palpite < 1 || palpite > 100) {
            printf("Valor inválido! Por favor, digite um número entre 1 e 100.\n");
        }
    } while (palpite < 1 || palpite > 100);
    return palpite;
}

int verificarPalpite(int palpite, int numeroSorteado) {
    if (palpite == numeroSorteado) {
        return 1;
    } else if (palpite < numeroSorteado) {
        printf("Você chutou muito baixo!\n");
    } else {
        printf("Você chutou muito alto!\n");
    }
    return 0;
}

int main() {
    srand(time(NULL));
    int numeroSorteado = gerarNumero();
    int palpite, tentativas = 0;
    int acertou = 0;

    while (!acertou) {
        palpite = pedirPalpite();
        tentativas++;
        acertou = verificarPalpite(palpite, numeroSorteado);
    }

    printf("Parabéns!!! Você acertou em %d tentativas.\n", tentativas);

    return 0;
}
