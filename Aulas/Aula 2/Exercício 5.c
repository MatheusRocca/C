#include <stdio.h>
int main(){
    float raio;
    float pi;
    float area;
    
    printf("Digite o valor do raio:");
    scanf("%f",&raio);
    
    pi = 3.14;
    area = (pi*raio*raio);
    
    printf("Um círculo com raio %f tem área igual a %.2f.",raio,area);

    return 0;
}
