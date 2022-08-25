/*
 Lucas Toneto Pires - 3181717
 12.Faça uma função que retorne a posição de um dado caracter dentro de uma string.
*/

#include <stdio.h>
#include <string.h>

int posicao(const char* string, char caracter){
    return (strchr(string, caracter) - string)+1;
}

int main(void){
    const char* string = "qwertyuiopasdfghjklzxcvbnm";
    int caracter = 'a';
    int p = posicao(string, caracter);
    printf("O caractar esta na posicao %d", p);
}