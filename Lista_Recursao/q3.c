/*1 - Faça uma função recursiva que permita inverter um número inteiro N. Ex: 123 – 321*/
#include<stdio.h>

int inverter(int n) {
    
  if(n==0) {
    return n;
    }     
  else {
     printf("%d", n % 10);
     n=n / 10;
     return inverter(n);
    }
}
int main()
{
  int numero;
  
   printf("Digite um numero: ");
   scanf("%d",&numero);
  
   inverter(numero);
  
   return 0;
}