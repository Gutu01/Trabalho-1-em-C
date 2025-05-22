#include <stdio.h>
#include <math.h>

    int main (){

    float numero;
    
    printf("Vamos ver se o número é maior ou não a 10!\nResposta:");

    if(scanf("%f", &numero) != 1){
        printf("Número invalido!\n\n\n");
        return (1);
    }

    if(numero > 10)
        printf("O número é maior que 10\n\n\n");
    else if (numero < 10)
        printf("O número é menor que 10\n\n\n");
    else
        printf("O número é igual a 10!\n\n\n");


        return 0;
    }