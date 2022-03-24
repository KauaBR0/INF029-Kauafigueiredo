#include <stdio.h>


int soma(int x, int y){

  int soma;
  soma = x + y;


  return soma;
  
}

int main(){

    int a, b, sum;

  scanf("%d", &a);
  scanf("%d", &b);
  
  sum = soma(a, b);
  printf("%d", sum);  
  
}

