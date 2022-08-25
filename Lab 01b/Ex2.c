/*
 Lucas Toneto Pires - 3181717
 2. Escreva um programa que leia 3 notas de um aluno
 e a média das notas dos exercícios realizados por ele.
 Calcular a média de aproveitamento, usando a fórmula:
 MA = (N1 + N2*2 + N3*3 + ME)/7. A partir da média,
 informar o conceito de acordo com a tabela:
*/

#include <stdlib.h>

int main(void){
    float n1, n2, n3, me, ma;

    printf(" Digite a N1: ");
    scanf("%f", &n1);

    printf("Digite a N2: ");
    scanf("%f", &n2);

    printf("Digite a N3: ");
    scanf("%f", &n3);

    printf("Digite a Me: ");
    scanf("%f", &me);

    ma = (n1 + n2*2 + n3*3 + me)/7.0;

    if(ma>=9){
        printf("A");
    }
    else if(ma>=7.5){
        printf("B");
    }
    else if(ma>=6){
        printf("C");
    }
    else if(ma>=4){
        printf("D");
    }
    else{
        printf("E");
    }
    return 0;
}