#include <stdio.h>
#include <string.h>


int main(void){


    char texto[250];
    char palavra[50];


    printf("Digite um texto: ");
    gets(texto);

    printf("Digite uma palavra: ");
    gets(palavra);

    fflush(stdin);

    int i, j;
    int posicao = 0;
    int posicao_inicial = 0;
    int posicao_final = 0;
    int contador = 0;

    for(i = 0; i < strlen(texto); i++){
        if(texto[i] == palavra[0]){
            posicao = i;
            for(j = 0; j < strlen(palavra); j++){
                if(texto[posicao] == palavra[j]){
                    contador++;
                    posicao++;
                }
                else{
                    contador = 0;
                    break;
                }
            }
            if(contador == strlen(palavra)){
                posicao_inicial = i;
                posicao_final = posicao;
                printf("A palavra %s apareceu na posição %d a %d.\n", palavra, posicao_inicial, posicao_final);
            }
            contador = 0;
        }
    }



}