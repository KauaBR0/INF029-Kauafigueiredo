/*
4) Faça uma função recursiva que permita somar os elementos de um vetor de
inteiros.
*/

#include <stdio.h>

int somar(int vetor[], int tam){
  if(tam == 0){
    return 0;
  }
  else {
    return vetor[tam - 1] + somar(vetor, tam - 1);  
  }
}

int main () {

  int resultado;
  int vetor[5] = {1,2,3,4,5};
  resultado = somar(vetor, 5);
  

  printf("Soma: %d\n", resultado);

return 0;
}