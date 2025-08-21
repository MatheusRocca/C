#include <stdio.h>

void clima (float celcius, float far);

int main(){
    float celcius, far;
    printf("Qual a medida em graus Fahrenheit?");
    scanf(" %f", &far);
    clima(celcius,far);
}
void clima(float celcius, float far){
    float resultado;
    resultado = (far - 32) * 5/9;
    printf("A temperatura em graus celcius é: %.2f",resultado);
}
