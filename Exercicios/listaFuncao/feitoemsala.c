# include  < stdio.h >

int  soma ();
int  subt ();
int  mult ();

int  soma ( int x, int y){
  retorna x + y;
}
int  subt ( int x, int y){
  retornar x - y;
}
int  mult ( int x, int y){
  retorna x * y;
}

int  main (){
  int a, b, c, d;
  int soma, sub, mul;
  
  scanf ( " %d " , &a);
  scanf ( " %d " , &b);
  scanf ( " %d " , &c);
  scanf ( " %d " , &d);
  soma = soma (a, b);
  sub = subt (c, d);
  mul = mult (soma, sub);

  printf ( " %d " ,mul);
  