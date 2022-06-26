/*
33) Crie um programa em C, que contenha uma função recursiva para encontrar o
menor elemento em um vetor. A leitura dos elementos do vetor e impressão do menor
elemento devem ser feitas no programa principal.
*/
#include<stdio.h>
#include<stdlib.h>

int menor(int v[],int tam, int indice) {
    
  if(tam == 0) {
       return v[indice];
  }
    else {
         if(v[tam] < v[indice]) {
              return menor(v,tam-1,tam);
           }
         else {
              return menor(v,tam-1,indice);
           }
      }
}

int main(void) {
    int vet[] = {57,13,42,135,21,3,82,59};
    int resultado;

  resultado = menor(vet, 7, 0);
    printf("O menor valor e: %d\n", resultado);
    return 0;
  }