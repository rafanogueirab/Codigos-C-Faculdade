#include <stdio.h>

int main()
{
    int numero;
    int soma = 0;

    printf("Digite numeros inteiros para somar.\n");
    printf("Digite 0 para encerrar o programa.\n\n");

    do{
        printf("Digite um numero: ");
        scanf("%d", &numero);

        soma += numero;

    }while (numero != 0);

    printf("\nA soma total dos numeros digitados e: %d\n", soma);

    return 0;
}