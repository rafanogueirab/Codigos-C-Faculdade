#include <stdio.h>

int main(){
    int i;
    float a;
    int ngt = 0;

    for(i = 1; i <= 5; i++){
        printf("Digite o %d valor: ", i);
        scanf("%f", &a);

        if(a < 0){
            ngt++;
        }
    }

    printf("No total, foram digitados %d numeros negativos.", ngt);

    return 0;
}