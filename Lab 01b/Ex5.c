/*
 Lucas Toneto Pires - 3181717
 5.Crie um programa  capaz de multiplicar uma linha de uma matriz
 de inteiros por um dado número. Faça o mesmo para uma coluna.
 A matriz deve ser lida de teclado.
*/

#include <stdio.h>

int main(void){
    int l, c, l2, c2, lmult, cmult;
    printf("Digite o numero de linhas e coluna da matriz.\n");
    scanf("%d %d", &l, &c);
    int matriz[l][c];

    for (int i=0; i<l; i++){
        printf("Digite os valores para a %d linha.\n", i+1);
        for (int j=0; j<c; j++)
            scanf("%d", &matriz[i][j]);
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