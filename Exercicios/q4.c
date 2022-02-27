#include <stdio.h>
//Faça um programa que leia dois valores informados pelo usuário e inverta os valores nas variáveis ​​lidas sem usar variável auxiliar


int main()
{
  int a, b;

  printf("digite o primeiro valor\n");
  scanf("%d", &a);
  printf("digite o segundo valor\n");
  scanf("%d", &b);

  a=a+b;     //isso
  b=a-b;     
  a=a-b;   
  printf("os valores invertidos são %d e %d \n", a, b);
  
  
return 0;
}