/*
39) Escreva uma função recursiva que calcule a multiplicação de dois números
naturais, através de incrementos sucessivos
*/
#include <stdio.h>

int poligono( int a, int b ){

   if( b == 1)
     return a;
   return a + poligono(a, --b);
}

int main(){

  int num1, num2, resultado;

  printf("Digite o primeiro numero\n");
  scanf("%d", &num1);
  printf("Digite o segundo numero\n");
  scanf("%d", &num2);

  resultado = poligono(num1, num2);
  printf("resultado:%d\n\n", resultado);
  

  return 0;
}