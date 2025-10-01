#include <stdio.h>

int main(){
    float soma = 0, valor;
    int opcao;

    do{
        printf("\nDigite qual operacao voce deseja:");
        printf("\n 1. Deposito");
        printf("\n 2. Saque");
        printf("\n 3. Consulta de Saldo");
        printf("\n 4. Sair\n");
        scanf("%d", &opcao);

        switch (opcao){
            
            case 1:
                printf("\nDigite o valor do deposito:");
                scanf("%f", &valor);
                soma = soma + valor;
            break;

            case 2:
                printf("\nDigite o valor do saque:");
                scanf("%f", &valor);
                if (valor > soma)
                {
                    printf("\nSaldo Insuficiente\n");
                }
                else
                {
                    soma = soma - valor;
                }
            break;

            case 3:
                printf("\nValor disponivel em conta: R$%.2f\n", soma);
            break;

            default:
                if (opcao != 4){
                    printf("\nOpcao Invalida!\n");
                }

        }
    }while(opcao != 4);

    printf("\nFim das operacoes. \n\n");

    return 0;
}