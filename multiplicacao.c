//include a biblioteca stdio.h que permite usar entrada e saida de infos.(print e scanf)
#include<stdio.h>

//incluir a biblioteca stdlib.h que permite funcoes utilitarias (system())
#include<stdlib.h>

//declarar a funcao principal, onde o progama começa sua execução
int main(){
    
    float numero1, numero2, respMult;

    printf("Digite primeiro numero: ");
    scanf("%f", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);


    respMult = numero1 * numero2;
    printf("A divisão dos dois numeros é: %.2f", respMult);


 //pausar o sistema até que o usuario pressione qualquer tecla
 system("pause");
 //finalizamos o progama retornando 0, indicando que ocorreu tudo bem
    return 0;
}