#include <stdio.h>

int solicitar_idade() {
    int idade;
    do {
        printf("Digite a idade do nadador: ");
        scanf("%d", &idade);
        if (idade < 0) {
            printf("Por favor, digite uma idade válida (não negativa).\n");
        }
    } while (idade < 0);
    return idade;
}

void classificar_nadador(int idade, char *categoria) {
    if (idade >= 5 && idade <= 7) {
        sprintf(categoria, "Infantil A");
    } else if (idade >= 8 && idade <= 10) {
        sprintf(categoria, "Infantil B");
    } else if (idade >= 11 && idade <= 13) {
        sprintf(categoria, "Juvenil A");
    } else if (idade >= 14 && idade <= 17) {
        sprintf(categoria, "Juvenil B");
    } else if (idade >= 18) {
        sprintf(categoria, "Adulto");
    } else {
        sprintf(categoria, "Idade fora da faixa para classificação");
    }
}

void apresentar_resultado(int idade, char *categoria) {
    printf("Nadador com %d anos está na categoria: %s\n", idade, categoria);
}

int main() {
    int idade = solicitar_idade();
    char categoria[30];
    
    classificar_nadador(idade, categoria);
    apresentar_resultado(idade, categoria);
    
    return 0;
}
