#include <stdio.h> 
int main () {
    int num1;
    int num2;
    int soma;
    int div;
    int mult;
    int sub;

    printf("Digite o primeiro número:");
    scanf("%d", &num1);

    printf("Digite o segundo número:");
    scanf("%d", &num2);
    
    soma = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;
    
    printf("A soma será %d, a subtração será de %d, a multiplicação será %d e a divisão será %d", soma, sub, mult, div);

    return 0;
}
