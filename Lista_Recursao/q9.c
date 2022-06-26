/*
9) Crie uma função recursiva que receba um número inteiro positivo N e calcule o
somatório dos números de 1 a N.
*/

#include <stdio.h>


int soma(int numero){
  if(numero == 0){
    return 0;
   }
  else{
    return numero + soma(numero -1);
   }
}

int main(){

  int num, resultado;
    
  printf("Digite um numero\n");
  scanf("%d", &num);
    
  resultado = soma(num);
  printf("Somatoria: %d\n", resultado);

return 0;
}