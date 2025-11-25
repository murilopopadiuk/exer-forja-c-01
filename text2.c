#include<stdio.h>
#include<stdlib.h>

int main(){

//declarar ma string com tamanho maximo de 50 caracters
char nome[50];

printf("Digite seu nome: ");
//le o nome ate 49 caracters, incluindo espaços
fgets(nome, 50, stdin);
printf("O nome digitado foi: %s \n", nome);


    system("pause");
    return 0;
}