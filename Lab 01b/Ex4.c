/*
 Lucas Toneto Pires - 3181717
 4.Crie um progama capaz de ler dois nomes de pessoas e imprimi-los em ordem alfabética.
 Faça isto com string de C e de C++
*/

#include <stdio.h>
#include <string.h>

int main(void){

    char nome1[10], nome2[10];
    int retorno;

    scanf("%s", &nome1); scanf("%s", &nome2);
    retorno = strcoll(nome2, nome1);

    if(retorno==1){
        printf("%s\n%s\n", nome1,nome2);}
    else{
        printf("%s\n%s\n", nome2,nome1);}

    return 0;
}