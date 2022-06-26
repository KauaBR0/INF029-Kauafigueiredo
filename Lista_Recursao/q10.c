/*
10) Escreva uma função recursiva que determine quantas vezes um dígito K ocorre
em um número natural N. Por exemplo, o dígito 2 ocorre 3 vezes em 762021192.
*/
#include <stdio.h>

int verifica(int n, int k, int i) {
	if(n % 10 == k) {
		i++;
	}
	if(n % 10 == n) {
		return i;
	}
	verifica(n / 10, k, i);
}

int main()
{
  int numero, outro, resultado;
  int i = 0; 
  
   printf("Digite um numero :");
   scanf("%d", &numero);
   printf("Digite o numero que deseja contar:");
   scanf("%d", &outro);
  
   resultado = verifica(numero, outro, i);
  
   printf("o numero se repete %d vezes\n\n", resultado);
   return 0;
}