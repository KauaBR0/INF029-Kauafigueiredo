#include <stdio.h>

typedef struct  {
    int numero; 
} Num;

int ler4numeros( Num valores[]) {
    int i, valor;

    for (i = 0; i < 4; i++) {
        printf("Digite um valor: ");
        scanf("%d", &valor);
         valores[i].numero = valor;
    }   
}

int main() {
    Num valores[4];

    int i;
    ler4numeros(valores);

    for(i = 0; i < 4; i++) {
        printf("%d\n", valores[i].numero);
    }
}