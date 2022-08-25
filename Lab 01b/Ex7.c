/*
 Lucas Toneto Pires - 3181717
 7. Faça um programa que crie um vetor de pessoas.
 Os dados de uma pessoa devem ser armazenados em um variavel do tipo struct.
 O programa deve permitir que o usuário digite o nome de 3 pessoas e a seguir
 imprimi os dados de todas as pessoas. A struct deve armazenar os dados de idade, peso e altura.
*/

#include <stdio.h>
#include <string.h>

typedef struct{
    int idade;
    float peso;
    float altura;
} pessoas;

void ImprimePessoa(pessoas pessoa){
    printf("Idade: %d  Peso: %f Altura: %f\n", pessoa.idade, pessoa.peso, pessoa.altura);
}

void armazena_pessoa(pessoas *pessoa, int idade, float peso, float altura){
    pessoa->idade = idade;
    pessoa->peso = peso;
    pessoa->altura = altura;
}

int main(void ){
    char nome;
    printf("Insira um nome:\n ");
    scanf("%c", &nome);

    pessoas Joao;
    pessoas ana;
    pessoas lucas;
    pessoas suely;
    armazena_pessoa(&Joao, 15, 70.5, 1.75);
    armazena_pessoa(&ana, 14, 120, 1.75);
    armazena_pessoa(&lucas, 75, 55.5, 1.75);
    armazena_pessoa(&suely, 45, 45.5, 1.75);
    ImprimePessoa(Joao);

    return 0;
}