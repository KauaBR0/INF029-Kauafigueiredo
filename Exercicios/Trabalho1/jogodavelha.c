#include <stdio.h>

//variaveis globais x 0 " "
char jogo[3][3];
int l,c;

void inicializarMatriz() { 
    for(l = 0; l < 3; l++){
        for(c = 0; c < 3; c++)
        jogo[l][c] = ' ';
    }
}

//imprimir game
void imprimir(){
    printf("\n\n\t 0   1   2\n\n");
    for(l = 0; l < 3; l++){
        for(c = 0; c < 3; c++) {
            if(c == 0)
                printf("\t");
            printf(" %c ", jogo[l][c]);
            if(c  < 2)
                printf("|");
            if(c == 2)
                printf("   %d", l);
        }
        printf("\n");
        if (l < 2)
        printf("\t-----------\n");
        
    }
}

/*
    vitoria por linha
    1 - ganhou
    0 - n ganhou
*/
int ganhouPorLinha(int l, char c){
    
    if(jogo[l][0] == c && jogo[l][1] == c && jogo[l][2] == c)
        return 1;
    else
        return 0;
}

/*
    verificar vitoria por todas as linhas
    1 - ganhou
    0 - n ganhou
*/
int ganhouPorLinhas(char c){
    int ganhou = 0;
    for(l == 0; l < 3; l++){
        ganhou += ganhouPorLinha(l, c);
    }
    return ganhou;
}

/*
    verificar vitoria coluna
    1 - ganhou
    0 - n ganhou ainda
*/
int ganhouPorColuna(int c, char j){
    if(jogo [0][c] == j && jogo[1][c] == j && jogo [2][c] == j)
        return 1;
    else
        return 0;
}
/*
    verificar vitoria por todas as colunas
    1 - ganhou
    0 - n ganhou
*/
int ganhouPorColunas(char j){
    int ganhou = 0;
    for (c = 0; c < 3; c++){
        ganhou += ganhouPorColuna(c, j);
    }
    return ganhou;
}
/*
    verificar vitoria diagonal principal
    1 - ganhou
    0 - n ganhou ainda
*/
int ganhouPorDiagPrin(char c){
    if(jogo[0][0] == c && jogo[1][1] == c && jogo[2][2] == c)   
    return 1;
    else
    return 0;
}
/*
    verificar vitoria diagonal secundaria
    1 - ganhou
    0 - n ganhou ainda
*/
int ganhouPorDiagSec(char c){
    if(jogo[0][2] == c && jogo[1][1] == c && jogo[2][0] == c)   
    return 1;
    else
    return 0;
}
/*
    Validar coordenada
    1 - valido
    0 - invalido
*/
int eValida(int l, int c){
    if (l >= 0 && l < 3 && c >= 0 && c < 3 && jogo[l][c] == ' ')
        return 1;
    else
        return 0;
}
// leitura das coordenadas
void lerCoodernadas(char j){
    int linha, coluna;

    printf("Digite Linhas e Coluna: ");
    scanf("%d%d", &linha, &coluna);

    while(eValida(linha, coluna) == 0){
        printf("Coordenada invalida, digite novamente: ");
    scanf("%d%d", &linha, &coluna);

    }
    jogo[linha][coluna] = j;
}

// qtd de posições vazias
int quantVazias(){
    
    int quantidade = 0;

    for(l = 0; l < 3; l++){
        for(c = 0; c < 3; c++)
        if(jogo[l][c] == ' ')
            quantidade++;
    }
    return quantidade;
}

// jogar com o loop principal do game
void jogar(){
    int jogador = 1, vitoriax = 0, vitoria0 = 0;
    char jogador1 = 'X', jogador2 = '0';
    
    do{
        imprimir();
        if (jogador == 1) {
            lerCoodernadas(jogador1);
            jogador++;
            vitoriax += ganhouPorLinhas(jogador1);
            vitoriax += ganhouPorColunas(jogador1);
            vitoriax += ganhouPorDiagPrin(jogador1);
            vitoriax += ganhouPorDiagSec(jogador1);
        }
        else{
            lerCoodernadas('0');
            jogador = 1;
            vitoria0 += ganhouPorLinhas(jogador2);
            vitoria0 += ganhouPorColunas(jogador2);
            vitoria0 += ganhouPorDiagPrin(jogador2);
            vitoria0 += ganhouPorDiagSec(jogador2);
        }
    }while(vitoriax == 0 && vitoria0 == 0 && quantVazias() > 0);

    imprimir();

    if(vitoria0 == 1)
        printf("\nJogador 2 venceu!!\n");
    else if(vitoriax == 1)
        printf("\nJogador 1 venceu!!\n");
    else
        printf("empataram!");

}

int main() {
    int opcao;

    do{
        inicializarMatriz();
        jogar();

        printf("\n digite 1 para jogar novamente: ");
        scanf("%d", &opcao);
    }while (opcao == 1);


   


    return 0;
}