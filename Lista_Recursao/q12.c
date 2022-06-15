/*12) Faça uma função recursiva que receba um número inteiro positivo N e imprima
todos os números naturais de 0 até N em ordem crescente.
*/

#include <stdio.h>

int crescente(int numero){
    
    if (numero == -1){
        return 0;
    }
    else {
        1 + crescente(numero - 1);
        printf("%d ", numero);
    }
    
}

int main(){
    
    int num;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    crescente(num);
    
    return 0;
}