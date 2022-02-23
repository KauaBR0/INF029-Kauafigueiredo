#include <stdio.h>
//Faça um programa que leia a idade de duas pessoas e imprima a soma das idades


int main()
{
  int p1, p2, soma;

  printf("digite a primeira idade\n");
  scanf("%d", &p1);
  printf("digite a segunda idade\n");
  scanf("%d", &p2);

  soma = p1 + p2;
  printf("a soma é %d \n", soma);
  
  
return 0;
}