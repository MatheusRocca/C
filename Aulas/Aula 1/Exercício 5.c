//Elon Musk acaba de liberar dez milhões de dólares para Construtora Fonseca e Mercadante construir casas populares no Brasil. Cada casa custao equivalente a 150 salários mínimos. Crie um programa em C que leia ovalor do salário mínimo, o valor do dólar do dia e calcule a quantidade decasas possíveis de construir
#include <stdio.h>
int main(){
    float dolar_atual;
    float salario_minimo;
    float valor_liberado;
    float valor_liberado_reais;
    float valor_por_casa;
    float quantidade_casas;
    
    printf("Quanto está o dolar agora?");
    scanf("%f",&dolar_atual);
    
    printf("Quanto está o salário minimo?");
    scanf("%f",&salario_minimo);
    
    valor_liberado = 10000000;
    valor_liberado_reais = valor_liberado * dolar_atual;
    
    valor_por_casa = 150 * salario_minimo;
    
    quantidade_casas = valor_liberado_reais / valor_por_casa;
    
    printf("Será possível construir %d casas.\n", (int)quantidade_casas);
    return 0;
    
}
