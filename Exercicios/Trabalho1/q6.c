
#include <stdio.h>
#include <stdlib.h>

int vezes(int n, int k) {
    int cont = 0;
    int aux = n;
    while (aux != 0) {
        if (aux % 10 == k) {
            cont++;
        }
        else if (aux % 100 == k) {
            cont++;
        }
        else if (aux % 1000 == k) {
            cont++;
        }
        else if (aux % 10000 == k) {
            cont++;
        }
        else if (aux % 100000 == k) {
            cont++;
        }
        else if (aux % 1000000 == k) {
            cont++;
        }
        else if (aux % 10000000 == k) {
            cont++;
        }
        else if (aux % 100000000 == k) {
            cont++;
        }
        else if (aux % 1000000000 == k) {
            cont++;
        }
        aux /= 10;
    }
    return cont;
}

int main() {
    int n, k;
    printf("Digite um numero natural: ");
    scanf("%d", &n);
    printf("Digite o numero que busca: ");
    scanf("%d", &k);
    printf("%d", vezes(n, k));
    return 0;
}