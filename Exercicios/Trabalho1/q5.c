#include <stdio.h>

int main(void){


    int n, i, inverso = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    for(i = n; i > 0; i /= 10){
        inverso = inverso * 10 + i % 10;
    }

    printf("O inverso de %d -- %d\n", n, inverso);

    return 0;

}