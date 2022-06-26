/*
35) Dado um número n na base decimal, escreva uma função recursiva em C que
converte este número para binário.
*/
#include <stdio.h>

int converter(int decimal){
  int n;
  if(decimal/2 != 0){
    n = decimal/2;
    converter(n);
    printf("%d", decimal%2);
  }
  else{
    printf("%d", decimal%2);
  }
  
}

int main(void){

  int decimal;

  printf("digite um numero:");
  scanf("%d", &decimal);

  converter(decimal);

  return 0;
  
}