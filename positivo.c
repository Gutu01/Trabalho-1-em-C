#include <stdio.h>

int main(){

    float numero;

    printf("Vamos verificar se seu número é positivo ou negativo\nNúmero:");
    scanf("%f", &numero);

    if (numero >= 0)
        printf("Seu número é positivo\n\n\n");
    else
        printf("Seu número é negativo\n\n\n");


    return 0;
}