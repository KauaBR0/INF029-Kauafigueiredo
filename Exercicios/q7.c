#include <stdio.h>
//Faça um programa que leia a idade de uma pessoa e informe de ela é de maior ou de menor. O programa deve repetir essa ação até que uma idade seja negativada


int main()
{
  int idd;

  printf("digite sua idade\n");
  scanf("%d", &idd);
  
  for (int i = 0; i < idd; i++)
  {
      if (idd > 18)
      {
          printf(" de maior\n");
      }
      else if (idd < 18)
      {
          printf(" de menor\n");
      }
      else if (idd < 0)
      {
          break;
      }
 
    }
return 0;
}