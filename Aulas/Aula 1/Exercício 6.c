//Escreva um programa em C que receba um valor inteiro e diga se ele é múltiplo de 5 (pesquise sobre estrutura condicional em C).
#include <stdio.h>
int main(){
    int valor;
    float resto;
    int divisao;
    
    printf("Digite um valor para ver se é multiplo de 5:");
    scanf("%d",&valor);
    
    
    
    if(valor % 5 == 0){
        divisao = valor / 5;
        printf("O valor é divisivel por 5 e o resultado é:%d",divisao);
    }
    else{
        printf("O valor não é divisivel por 5.");
    }
    return 0;
}
