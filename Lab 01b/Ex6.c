/*
 Lucas Toneto Pires - 3181717
 6.Crie um programa capaz de criar a transposta de uma matriz. A matriz deve ser lida de teclado.
*/

#include <stdio.h>

int main(void){
    int l, c;
    printf("Digite o numero de linhas e coluna da matriz.\n");
    scanf("%d %d", &l, &c);
    int matriz[l][c], transposta[c][l];

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

    for (int i=0; i<l; i++) {
        for (int j=0; j<c; j++){
            transposta[j][i] = matriz[i][j];
        }
    }

    for (int i=0; i<c; i++) {
        for (int j=0; j<l; j++) {
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}