/*
45) Escreva uma função recursiva que calcule a soma dos dígitos de um número
inteiro. Por exemplo, se a entrada for 123, a saída deverá ser 1+2+3 = 6.
*/

#include <stdio.h>
#include <stdlib.h>

int somar (int num) {

  int a, b;

  a = num % 10;

  b = (num - a) / 10;

  if (b <= 0)
  {
    return a;
  }
  else
  {
    return a + somar(b);
  }
}

int main(void) {
int n, soma;

printf("Informe o número: ");
scanf("%d", &n);

soma = somar(n);
printf("A soma dos dígitos do número é: %d\n\n", soma);

return 0;
}

