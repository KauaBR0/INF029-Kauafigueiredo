#include <stdio.h>
#include <string.h>

int main(void){

    char texto[250];
    char letra;
    int contador = 0;
    int i;

    printf("Digite um texto: ");
    gets(texto);

    printf("Digite uma letra: ");
    scanf("%c", &letra);

    for(i = 0; i < strlen(texto); i++){
        if(texto[i] == letra){
            contador++;
        }
    }

    printf("A letra %c aparece %d vezes no texto.\n", letra, contador);

    return 0;

}