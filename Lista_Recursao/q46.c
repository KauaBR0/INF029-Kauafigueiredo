/*
46) Faça uma função recursiva que permita calcular a média um vetor de tamanho N.
*/

#include <stdio.h>

int media(int vet[], int posicao) {
    
  if (posicao == 0) 
      return 0;
    else if (posicao == 5) {
      return (vet[posicao - 1] + media(vet, posicao - 1)) / 5;
      }
    else {
      return vet[posicao - 1] + media(vet, posicao - 1);
      }
}

int main() {
  
  int vet[5] = {4, 2, 1, 6, 7};
  int resultado;

  resultado = media(vet, 5);
  
  printf("media: %d\n\n", resultado);

  return 0;
}