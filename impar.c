#include <stdio.h>

int main(){

    int numero;

    printf("vamos ver se seu número é par ou impar!\nNúmero:");

    if(scanf("%d", &numero) != 1){
        printf("Número invalido");
        return 1;
    }

    if (numero % 2 == 0)
        printf("Seu número par!\n\n\n");
    else    
        printf("Seu número é impar!\n\n\n");

    return 0;
}