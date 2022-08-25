/*
 Lucas Toneto Pires - 3181717
 10.Crie uma função capaz de multiplicar uma linha de uma matriz por um dado número.
 Faça o mesmo para uma coluna.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    int l=5, c=3, l2, c2, lmult, cmult;
    int matriz[l][c];

    for(int i=0; i<l; i++){
        for(int j=0; j<c; j++){
            matriz[i][j] = (rand()%100);
        }
    }

    for (int i=0; i<l; i++) {
        for (int j=0; j<c; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Qual linha deseja multiplicar?\n");
    scanf("%d", &l2);
    printf("Multiplicar por quanto?\n");
    scanf("%d", &lmult);

    printf("Qual coluna deseja multiplicar?\n");
    scanf("%d", &c2);
    printf("Multiplicar por quanto?\n");
    scanf("%d", &cmult);

    for (int i=0; i < c; i++) {
        matriz[l2-1][i] = (matriz[l2-1][i]) * lmult;
    }

    for (int i=0; i < l; i++) {
        matriz[i][c2-1] = (matriz[i][c2-1]) * cmult;
    }

    for (int i=0; i<l; i++) {
        for (int j=0; j<c; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}