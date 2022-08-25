/*
 Lucas Toneto Pires - 3181717
 9.Crie uma função capaz de substituir todos os números negativos de uma matriz por seu módulo.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int l=5, c=8;
    int matriz[l][c];

    for(int i=0; i<l; i++){
        for(int j=0; j<c; j++){
            matriz[i][j] = (rand()%1000)-500;
        }
    }

    for (int i=0; i<l; i++) {
        for (int j=0; j<c; j++) {
            printf("%d ", matriz[i][j]);
        } printf("\n");
    } printf("\n");

    for(int i=0; i<l; i++){
        for(int j=0; j<c; j++){
            if(matriz[i][j]<0){
                matriz[i][j] = (matriz[i][j])*-1;
            }
        }
    }

    for (int i=0; i<l; i++) {
        for (int j=0; j<c; j++) {
            printf("%d ", matriz[i][j]);
        } printf("\n");
    }

    return 0;
}