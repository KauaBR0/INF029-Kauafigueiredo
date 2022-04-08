#include <stdio.h>

int main()
{
    int dd, mm, aa;

    printf("Digite a data: ");
    scanf("%d/%d/%d", &dd, &mm, &aa);

    //verificar ano
    if (aa >= 1 && aa <= 9999)
    {
        //verificar mes
        if (mm >= 1 && mm <= 12)
        {
            //verificar dias
            if ((dd >= 1 && dd <= 31) && (mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12))
                printf("Data valida.\n");
            else if ((dd >= 1 && dd <= 30) && (mm == 4 || mm == 6 || mm == 9 || mm == 11))
                printf("Data valida.\n");
            else if ((dd >= 1 && dd <= 28) && (mm == 2))
                printf("Data valida.\n");
            else if (dd == 29 && mm == 2 && (aa % 400 == 0 || (aa % 4 == 0 && aa % 100 != 0)))
                printf("Data valida.\n");
            else
                printf("Dia invalido.\n");
        }
        else
        {
            printf("Mês invalido.\n");
        }
    }
    else
    {
        printf("Ano invalido.\n");
    }

    return 0;
} 