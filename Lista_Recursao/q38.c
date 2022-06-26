/*
38) Escreva uma função recursiva que calcule a soma de dois números naturais,
através de incrementos sucessivos (Ex.: 3 + 2 = ++(++3)).
*/
#include <stdio.h>

int somar (int a, int b) {
  
  if(a == 0) {
    return b;
    }
	if(b == 0) {
    return a;
    }
  else
	  return 1 + somar(a, b - 1);
}

int main(void){

  int num1, num2, resultado;

  printf("Informe dois números: \n");
  scanf("%d", &num1);
  scanf("%d", &num2);
  
  resultado = somar(num1, num2);

  printf("resultado: %d\n", resultado);

  return 0;
}