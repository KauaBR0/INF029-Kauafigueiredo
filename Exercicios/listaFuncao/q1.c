#include <stdio.h>

int sum();
int subt();
int mult();

int sum(int x, int y){
  return x + y;
}
int subt(int x, int y){
  return x - y;
}
int mult(int x, int y){
  return x * y;
}

int main(){
  int a, b, c, d;
  int soma, sub, mul;
  
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  scanf("%d", &d);
  soma = sum(a, b);
  sub = subt(c, d);
  mul = mult(soma, sub);

  printf("%d", mul);
  
}