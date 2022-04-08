#include <stdio.h>

typedef struct {
	int dia;
	int mes;
	int ano;
} Data;

int diaparadata(int qd)
{  
    int a,m,d;
    a=qd/365; 
    m=(qd % 365)/ 30;
    d=(qd % 365) % 30;
    printf ("\n %d ano(s) %d mese(s) e %d dia(s) ", a,m,d);
}

int validardata(int dd, int mm, int aa) {
       if (aa >= 1 && aa <= 9999)
    {
        //verificar mes
        if (mm >= 1 && mm <= 12)
        {
            //verificar dias
            if ((dd >= 1 && dd <= 31) && (mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12))
                return 1;
            else if ((dd >= 1 && dd <= 30) && (mm == 4 || mm == 6 || mm == 9 || mm == 11))
                return 1;
            else if ((dd >= 1 && dd <= 28) && (mm == 2))
                return 1;
            else if (dd == 29 && mm == 2 && (aa % 400 == 0 || (aa % 4 == 0 && aa % 100 != 0)))
                return 1;
            else
                return 0;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }

}

int bissexto (int ano);
unsigned long dist_dias (Data inicio, Data fim);

 /* guarda o numero de dias em cada mes para anos normais e bissextos */
int dias_mes[2][13] = {{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
                       {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};

int main(void) {
	Data dia1, dia2;
	int qtdias;
	

	printf("Coloque data incial no formato: dia/mes/ano\n");
	scanf("%d/%d/%d", &dia1.dia, &dia1.mes, &dia1.ano);
	printf("Coloque data final no formato: dia/mes/ano\n");
	scanf("%d/%d/%d", &dia2.dia, &dia2.mes, &dia2.ano);
    
	if(validardata(dia1.dia, dia1.mes, dia1.ano) == 1 && validardata(dia2.dia, dia2.mes, dia2.ano) == 1) {
  	qtdias = dist_dias (dia1, dia2);
	  	diaparadata(qtdias);									
	} else {
 	 printf("\nData invalida\n");
	}
	return 0;
}

/*
 * Retorna 1 caso 'ano' seja bissexto, 0 caso contrário
 */
int bissexto (int ano) {
	return (ano % 4 == 0) && ((ano % 100 != 0) || (ano % 400 == 0));
}

/*
 * Retorna a distancia entre inicio e fim em dias.
 * Assume que inicio nao vem depois de fim.
 */
unsigned long dist_dias (Data inicio, Data fim) {
	unsigned long idias, fdias;	/* guarda qtos dias tem da data */
					/* ate o comeco do ano */
	unsigned long def_anos = 0;	/* guarda diferenca entre anos das */
					/* datas inicio e fim medida em dias */
	register int i;
	int dbissexto;

	idias = inicio.dia;
	dbissexto = bissexto (inicio.ano);
	for (i = inicio.mes - 1; i > 0; --i)
		idias += dias_mes[dbissexto][i];

	fdias = fim.dia;
	dbissexto = bissexto (fim.ano);
	for (i = fim.mes - 1; i > 0; --i)
		fdias += dias_mes[dbissexto][i];

	while (inicio.ano < fim.ano)
		def_anos += 365 + bissexto(inicio.ano++);

	return def_anos - idias + fdias;
}