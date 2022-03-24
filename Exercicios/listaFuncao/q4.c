#include <stdio.h>

int ler3numeros(int *n1, int *n2, int *n3)
{
    int i;
    printf("Digite 3 numeros: ");
    scanf("%d %d %d", n1, n2, n3);
    return n1, n2, n3;
}

int main(){

    int n1, n2, n3;
    ler3numeros(&n1, &n2, &n3);
    printf("%d %d %d", n1, n2, n3);
    return 0;


}