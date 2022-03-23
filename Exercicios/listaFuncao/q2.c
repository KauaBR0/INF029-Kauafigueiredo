#include <stdio.h>

int soma();

int soma(){
  int a, b, soma;

  scanf("%d", &a);
  scanf("%d", &b);

  soma = a + b;

  printf("%d", soma);

  return soma;
  
}

int main(){
  soma();
  return 1;
  
}

