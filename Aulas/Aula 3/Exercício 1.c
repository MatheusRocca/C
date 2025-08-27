#include <stdio.h> 

float calculos(float frequencia, float nota);

int main(){
    float nota, frequencia;
    printf("Digite sua nota:");
    scanf("%f",&nota);
    
    printf("Digite a sua frequencia de aula:");
    scanf("%f",&frequencia);
    calculos(frequencia, nota);
    
    
    return 0;
}
float calculos(float frequencia, float nota){
    if (frequencia < 75){
        printf("Aluno reprovado por ter baixa frequencia.");
    }
    else if(frequencia > 75) and (nota >=7.5){
        printf("Aluno aprovado.");
    }
    else{
        printf("Aluno de exame.");
    }
    return 0;
    
}
