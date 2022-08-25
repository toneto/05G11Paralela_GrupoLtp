/*
 Lucas Toneto Pires - 3181717
 1. Crie um programa capaz de ler os dados de uma matriz quadrada de inteiros.
 Ao final da leitura o programa deverá imprimir o número da linha que contém
 o menor dentre todos os números lidos.
*/

#include<stdio.h>
#include <stdlib.h>

int main(void) {
    int t, i, j, aux, nlinha;

    printf("Digite o tamanho da matriz quadrada.\n");
    scanf("%d", &t);
    int matriz[t][t];

    for (i=0; i<t; i++){
        for (j=0; j<t; j++) {
            matriz[i][j] = rand()%1000;
        }
    }

    for (i=0; i<t; i++){
        for (j=0; j<t; j++){
            printf("%d ", matriz[i][j]);}
        printf("\n");
    }

    aux=999999999;
    nlinha=-1;
    for (i=0; i<t; i++){
        for (j=0; j<t; j++){
            if (matriz[i][j] < aux) {
                aux = matriz[i][j];
                nlinha = i+1;}
        }
    }

    printf("O menor valor esta na linha %d.",nlinha);

    return 0;
}