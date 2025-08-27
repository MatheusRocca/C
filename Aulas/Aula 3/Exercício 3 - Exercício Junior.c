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

void verificarPalpite(int palpite, int numeroSorteado) {
    if (palpite == numeroSorteado) {
        printf("Parabéns!!! Você acertou!\n");
    } else if (palpite < numeroSorteado) {
        printf("Você chutou muito baixo! O valor correto é %d.\n", numeroSorteado);
    } else {
        printf("Você chutou muito alto! O valor correto é %d.\n", numeroSorteado);
    }
}

int main() {
    srand(time(NULL));

    int numeroSorteado = gerarNumero();
    int palpite = pedirPalpite();
    verificarPalpite(palpite, numeroSorteado);

    return 0;
}
