//Crie um programa em C que leia o valor do salário mínimo e o valor do salário bruto de uma pessoa. Calcular e imprimir quantos salários mínimos ela ganha.

#include <stdio.h>

int main() {
    float salarioMinimo;
    float quantidadeSalarios;
    float salarioBruto;

    printf("Digite o valor do salário mínimo: R$ ");
    scanf("%f", &salarioMinimo);

    printf("Digite o valor do seu salário bruto: R$ ");
    scanf("%f", &salarioBruto);

    quantidadeSalarios = salarioBruto / salarioMinimo;

    printf("Você recebe aproximadamente %.2f salários mínimos.", quantidadeSalarios);

    return 0;
}
