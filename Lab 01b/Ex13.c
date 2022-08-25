/*
 Lucas Toneto Pires - 3181717
 13.Faça um rotina que remova um caracter de uma string do tipo char Str[100],
 dada a posição do caracter.
*/

#include <stdio.h>

int remove_caracter(char str[100], int posicao){
    for (int i=0; i<100; i++) {
        if (i == posicao) {
            for (int j = i; j < 100; j++){
                str[j] = str[j + 1];
            }
        }
    }
}

int main(void){
    char str[100] = "LoremipsumdolorsitametconsecteturadipiscingelitSedaliquamsitametenimquismattisNullatempormiegetexsem";
    int posicao;

    scanf("%d", &posicao);
    remove_caracter(str, posicao);
    printf("%s", str);
    return 0;
}