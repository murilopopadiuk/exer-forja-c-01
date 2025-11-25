#include<stdio.h>
#include<stdlib.h>

int main(){

float lado, resposta;

printf("Digite o valor de um dos lados do quadrado: ");
scanf("%f", &lado);

resposta = lado * lado;

printf("o resultado da soma dos quadrados é: %f", resposta);
    system("pause");
    return 0;
}