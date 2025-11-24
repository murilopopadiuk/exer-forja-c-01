//incluir a blibioteca stdio.h, permite o uso de entrada e saida de valores como o print
#include<stdio.h>
//inclui a biblioteca stdlib.h para funçoes utilitarias com o system
#include <stdlib.h>
//Inicio da função, onde o progama onde começa a ser executado
int main(){

    float  num1, num2 = 100.45;
    //int num2 = 200;

    //printar os numeros das variaveis
    printf("%f %d", num1, num2);
//pausa o progama, até q o usuario pressione qualquer tecla
system("pause");
//finalizar o progama retornando 0, indicando que deu tudo certo
  return 0;

}

