#include <stdio.h>

int main(){
    int mult, res, num;

    printf("Digite o numero para descobrir a tabuada: ");
    scanf("%d", &num);

    for(mult = 1; mult <= 10; mult++){
        res = num * mult;

        printf("%d", res);
    }

    return 0;
}