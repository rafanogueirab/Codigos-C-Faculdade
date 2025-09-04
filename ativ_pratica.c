#include <stdio.h>

int main(){

    int valor1, valor2, valor3; 
    float div;

    printf("\n Digite o primeiro numero inteiro: ");
    scanf("%d", &valor1);

    printf("\n Digite o segundo numero inteiro: ");
    scanf("%d", &valor2);

    printf("\n Digite o terceiro numero inteiro: ");
    scanf("%d", &valor3);

    int soma = valor1 + valor2 + valor3;
    int sub = valor1 - valor2 - valor3;
    int multi = valor1 * valor2 * valor3;

    if (valor2 != 0 && valor3 != 0){
        div = (float)valor1 / valor2 / valor3;
    }
    else{
        div = 0;
    }

    printf("\n A soma dos numeros e: %d", soma);
    printf("\n A subtracao dos numeros e: %d", sub);
    printf("\n A multiplicacao dos numeros e: %d", multi);
    if (valor2 != 0 && valor3 != 0)
        printf("\n A divisao dos numeros e: %.2f", div);
    else
        printf("\n Divisão impossível.");

    printf("\n O primeiro numero e maior que o segundo? %d", valor1 > valor2);
    printf("\n O segundo numero e menor que o terceiro? %d\n", valor3 > valor2);

    if (valor1 >= 0 && valor2 % 2 == 0)
        printf("O primeiro numero e positivo e o segundo numero e par, seguindo as condicoes do programa.");
    else
        printf("Algumas das condicoes necessarias nao foram atendidas.");

    return 0;
}