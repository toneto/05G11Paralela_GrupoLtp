/*
 Lucas Toneto Pires - 3181717
 8.Crie um programa capaz de criar a transposta de uma matriz.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int l=3, c=5;
    int matriz[l][c], transposta[c][l];

    for(int i=0; i<l; i++){
        for(int j=0; j<c; j++){
            matriz[i][j] = rand()%1000;
        }
    }

    for (int i=0; i<l; i++) {
        for (int j=0; j<c; j++){
            transposta[j][i] = matriz[i][j];
        }
    }

    for (int i=0; i<l; i++) {
        for (int j=0; j<c; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    } printf("\n");

    for (int i=0; i<c; i++) {
        for (int j=0; j<l; j++) {
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}