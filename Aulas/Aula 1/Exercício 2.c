//Crie um programa em C que leia um valor de hora e informe quantos minutos se passaram desde o início do dia.

#include <stdio.h>
int main(){
    int hora;
    int minuto;
    int total_minutos;
    
    printf("Digite a hora (00 até 23):");
    scanf("%d", &hora);
    
    printf("Digite o minuto(00 até 59):");
    scanf("%d", &minuto);
    
    if (hora < 0 || hora > 24 || minuto < 0 || minuto >59){
        printf("Hora ou minuto inválido.\n");
        return 1;
    }
    total_minutos = hora * 60 + minuto;
    printf("Já se passaram %d minutos desde o início do dia.\n",total_minutos);
}
