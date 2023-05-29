#include <stdio.h>

int main() {

    int n, i;
    float soma = 0;

    do{
        printf("\nDigite um valor positivo: ");
        scanf("%d", &n);

        if(n <= 2){
            printf("\nNumero invalido");
        }
    }while(n <= 1);

    // 1/1*3 - 1/2*4 + 1/3*5 - 1/n*n+2
    // 5
    for (i = 1; i <= n; i++) // i = 1
    {
        if(i % 2 == 0){
            soma = soma - (1 / (float)i * (i+2));
        }else{
            soma = soma + (1 / (float)i * (i+2));
        }
    }

    printf("Soma: %.2f", soma);

    printf("\n\n");
    return 0;
}