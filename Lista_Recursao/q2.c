/*2) Faça uma função recursiva que calcule e retorne o N-ésimo termo da sequência
Fibonacci. Alguns números desta sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89...*/
#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n) {
	if(n <= 2) {
		return 1;
	}
  else {
	return fibonacci(n - 1) + fibonacci(n - 2);  
  }
}

int main(void){
  int numero, resultado;
  printf("digite um numero: ");
  scanf("%d", &numero);

  resultado = fibonacci(numero);
  printf("%d", resultado);
}