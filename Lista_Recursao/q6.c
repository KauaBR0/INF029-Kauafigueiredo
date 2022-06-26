/*
6) Crie um programa em C, que contenha uma função recursiva que receba dois
inteiros positivos k e n e calcule kn
. Utilize apenas multiplicações. O programa principal
deve solicitar ao usuário os valores de k e n e imprimir o resultado da chamada da
função.
*/
#include<stdio.h>
#include<math.h>
int potencia(int k, int n){
  
  if(k == 0) {
    return 0;
  }
  else {
    return(pow(k,n));
  }
}

int main(){

  int k, n;

  printf("Informe k: ");
  scanf("%d", &k);
  printf("Informe n: ");
  scanf("%d", &n);

  printf("%d elevado a %d:%d\n", k,n, potencia(k,n));
  return 0;
}