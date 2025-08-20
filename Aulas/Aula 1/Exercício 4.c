//Uma imobiliária vende apenas terrenos retangulares. Faça um programa em C que leia as dimensões de um terreno e exiba a área do terreno.
#include <stdio.h>
int main(){
    float largura;
    float comprimento;
    float area;
    
    printf("Qual o valor da largura?");
    scanf("%f",&largura);
    
    printf("Qual o valor do comprimento?");
    scanf("%f",&comprimento);
    
    area = largura * comprimento;
    
    printf("A área é:%.2f metros quadrados.",area);
    return 0;
}
