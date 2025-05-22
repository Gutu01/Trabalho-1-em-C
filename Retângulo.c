#include <stdio.h>

int main (){

    float base, altura, resultado;

    printf("Vamos ver qual a área de um retângulo!\nPrimeiro, informe a base (em metros).\nBase:");

    if(scanf("%f", &base) != 1){
        printf("Número invalido.\n\n\n");
        return 1;
    }

    printf("Agora, me informa a altura dele.\nAltura:");

    if(scanf("%f", &altura) != 1){
        printf("Número invalido.\n\n\n");
        return 1;
    }

    resultado = base*altura ;

    printf("O resultado é %.2f metros cubicos\n\n\n", resultado);

    return 0;
}