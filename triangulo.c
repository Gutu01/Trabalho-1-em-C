#include <stdio.h>

int main(){

    float base, altura, resultado;
    

    printf("Vamos ver qual a área de um triangulo\nDigite a base do triângulo\nResposta:");
    
    if(scanf("%f", &base) != 1){
        printf("Número invalido\n\n\n");
        return 1;
    }

    printf("Agora a altura\nResposta:");

    if(scanf("%f", &altura) != 1){
        printf("Número invalido\n\n\n");
        return 1;
    }

    resultado = (base*altura)/2;

    printf("A área é igual a %.2f\n\n\n", resultado);

    return 0;
}