# include <stdio.h>

int  subt ();

int  subt ( int x, int y, int z){
  return x - y - z;
}

int  main (){
  int a, b, c;
  int sub;
  
  scanf ( "%d" , &a);
  scanf ( "%d" , &b);
  scanf ( "%d" , &c);
  
  sub = subt (a, b, c);

  printf ( "%d" ,sub);
}