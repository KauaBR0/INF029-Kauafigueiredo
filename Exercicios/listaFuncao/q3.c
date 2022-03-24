#include <stdio.h>
#include <stdlib.h>

int fatorial( int n ) {
  if (n >= 0){
    int f = 1;
    for( ; n > 0; f *= n-- );
    return f;
  } else 
    return -1;
}


int main() {
  int n, fat;
  
  printf("digite o valor que deseja obter o fatorial\n");
  scanf("%d", &n);

    fat = fatorial(n);  
    if (fat == -1)
      printf("valor invalido\n");
    else
      printf("fatorial de %d = %d\n", n, fat); 
}