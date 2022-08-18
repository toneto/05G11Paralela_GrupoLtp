#include <stdio.h>

int main(void) {
    int n,i,j,linhas,aux;

    printf("Qual o numero maximo? Este número deve ser sempre ímpar.");
    scanf("%d", &n);

    if (n%2 == 0)
        printf("Numero invalido.\n");

    else{
        linhas = (n-1)/2;

        for( i=0; i<=linhas; i++){
            for( aux=0; aux<=i; aux++){
                printf("  ");
            }
            for (j=i+1; j<=n-i; j++){
                printf("%d ",j);
            }
            printf("\n");
        }
    }

    return 0;
}