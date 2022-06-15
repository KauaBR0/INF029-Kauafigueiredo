/*13) Faça uma função recursiva que receba um número inteiro positivo N e imprima
todos os números naturais de 0 até N em ordem decrescente.*/

#include <stdio.h>

int decrescente(int numero){

  if(numero > 0){
    printf("%d ", numero);
    decrescente(numero - 1);
  }
  else {
    printf("%d ", numero);
  }
    
}

int main(){
    
    int num;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    decrescente(num);
    
    return 0;
}