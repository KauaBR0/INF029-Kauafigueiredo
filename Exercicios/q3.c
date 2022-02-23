#include <stdio.h>
//Faça um programa que leia dois valores informados pelo usuário e inverta os valores nas variáveis ​​lidas

int main()
{
  int a, b, c;

  printf("digite o primeiro valor\n");
  scanf("%d", &a);
  printf("digite o segundo valor\n");
  scanf("%d", &b);

  c = a;
  a = b;
  b = c;
  printf("os valores invertidos são %d e %d \n", a, b);
  
  
return 0;
}