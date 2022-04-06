//validar data

#include <stdio.h>

int main(void){

    int dd, mm, aaaa;

    printf("Digite a data no formato dd/mm/aaaa: ");
    scanf("%d/%d/%d", &dd, &mm, &aaaa);

    //verificar ano
    if(aaaa >= 1900 && aaaa <= 9999 || aaaa >= 1 && aaaa <= 99)
    {
        //verificar mes
        if (mm >= 1 && mm <= 12)
        {
            //verificar dia
            if (dd >= 1 && dd <= 31)
            {
            printf("Data valida\n");
            }
            else
            {
            printf("dia invalido\n");
            }
        }
        else 
        {
        printf("mes invalido\n");
        }
    }
    else
    {
    printf("ano invalido\n");
    }

return 0;
}





