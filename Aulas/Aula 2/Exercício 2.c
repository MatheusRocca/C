#include <stdio.h>

int main(){
float peso;
float altura;
float imc;

printf("Qual o seu peso?");
scanf("%f", &peso);

printf("Qual sua altura? (em metros)");
scanf("%f", &altura);

imc = peso / (altura*altura);
printf("O IMC de uma pessoa com peso %.2f kg e altura %.2f m é igual a:%.2f",peso,altura,imc);

    return 0;
}
