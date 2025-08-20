#include <stdio.h>
#include <math.h>
int main(){
    float cat1;
    float cat2;
    float hipotenusa;
    printf("Qual o valor do primeiro cateto:");
    scanf("%f",&cat1);
    
    printf("Qual o valor do segundo cateto:");
    scanf("%f",&cat2);
    
    hipotenusa = sqrt((cat1*cat1)+(cat2*cat2));
    
    printf("Um triângulo retângulo com lados %f e %f tem uma hipotenusa igual a %f",cat1,cat2,hipotenusa);
    return 0;
}
