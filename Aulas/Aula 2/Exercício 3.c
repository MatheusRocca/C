#include <stdio.h>
int main(){
    float tempc;
    float tempf;
    printf("Qual a temperatura em Graus Celcius:");
    scanf("%f", &tempc);
    tempf = (9 * tempc) / 5 + 32;
    printf("Uma temperatura de %f graus Celsius equivale a %.2f graus Fahrenheit",tempc,tempf);
    return 0;
    
}
