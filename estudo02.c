#include <stdio.h>

int main(){
    int n, i;
    long long int fatorial = 1; // Usar long long para evitar overflow

    printf("Digite um numero inteiro nao negativo: ");
    scanf("%d", &n);

    // Trata casos especiais para n = 0 e n = 1
    if (n == 0 || n == 1) {
        fatorial = 1;
    } else {
        // Calcula o fatorial usando um loop for
        for (i = 1; i <= n; i++) {
            fatorial *= i; // Equivale a fatorial = fatorial * i;
        }
    }

    printf("O fatorial de %d e %lld\n", n, fatorial);

    return 0;
}