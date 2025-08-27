#include <stdio.h>
int calculos(float a,float b,float c);
int main(){
    float a,b,c;
    printf("Digite o valor do lado A:");
    scanf("%f",&a);
    printf("Digite o valor do lado B:");
    scanf("%f",&b);
    printf("Digite o valor do lado C:");
    scanf("%f",&c);
    calculos(a,b,c);
    return 0;
}
int calculos(float a, float b, float c){
    if(a < b + c && 
       b < a + c && 
       c < a + b) {
        printf("Este triangulo existe");
    }
    else{
        printf("Este triângulo não existe.");
    }
    return 0;
}
