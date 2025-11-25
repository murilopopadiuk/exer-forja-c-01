#include<stdio.h>
#include<stdlib.h>

int main(){

char nome[50];
int idade;

printf("Digite seu nome: ");
fgets(nome, 50, stdin);
printf("O nome digitado foi: %s \n", nome);


printf("Digite sua idade: ");
 scanf("%d", &idade);

 printf("Ola %sVoce tem %danos. \n", nome, idade);

    system("pause");
    return 0;
}