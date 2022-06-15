//1) Faça uma função recursiva que calcule e retorne o fatorial de um número inteiro //N.


#include <stdio.h>
#include <stdlib.h>

float fatorial(int n) {
  float fat;
  
  if ( n <= 1 ){
    return (1);
  }
  else
  {
    fat = n * fatorial(n - 1);
    return (fat);
  }
}

int main(void) {
  
  int numero;
  float f;
  
  printf("Digite um numero: ");
  scanf("%d",&numero);
  
  f = fatorial(numero);
  
  printf("Fatorial de %d = %.1f", numero, f);
  
  return 0;
}