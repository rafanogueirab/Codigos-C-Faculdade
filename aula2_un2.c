#include <stdio.h>

int main(){
    int res, x = 1;

    while (x <= 10){
        res = 2*x;
        printf("%d\n", res);
        x += 1;
    }

    return 0;
}