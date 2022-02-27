#include <stdio.h>
//Faça um programa que leia a idade de uma pessoa e informe de ela é de maior ou menor


int main()
{
  int idd;

  printf("digite sua idade\n");
  scanf("%d", &idd);
  

  if (idd < 18) {     
    printf("De menor\n");
    }else
  {
    printf("de maior\n");
  }
  
return 0;
}