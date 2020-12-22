#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void generateBoard(int board[25][25], int nLines, int nCols, int nMines){

    // preenche um tabuleiro (parâmetro board) de dimensão
    // nLin linhas e nCol colunas com nMines minas. Utilize
    // a função rand() (stdlib.h) para gerar a posição de cada mina

    char *abc[26] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};

    printf(" ");

    for(int c = 0; c < nCols; c++){

        printf(" %c", abc[c]);

    }
    
    printf("\n");

    for(int l = 0; l < nLines; l++){

        printf("%d \n", l + 1);

    }

    for(int i = 0; i < nLines - 1; i++){

        // corre as linhas da matriz board

        for(int j = 0; j < nCols - 1; j++){

            // preenchimentos das colunas na linha i

            int k = rand() % 100;
            if(k >= 50){

                // por o * (mina) neste sítio

            }
            

        }

    }

}

void printBoard(int board[25][25], int nLines, int nCols, bool showMines){

    // mostra o tabuleiro no standard output (ecrã).
    // O parâmetro showMines indica se as minhas devem
    // ser mostradas (com o carácter *)
    
}

int uncover(int board[25][25], int nLines, int nCols, int line, int col){

    // descobre a
    // célula (line,col) de acordo com 
    // as regras indicadas na descriçao do jogo e 
    // indica se a açao foi bem sucedida.É mal sucedida 
    // se a célula tiver uma mina ou se nao existir no tabuleiro

}

int flag(int board[25][25], int nLines, int nCols, int line, int col){
    
    // sinaliza a célula (line,col) e indica se a 
    // açao foi bem sucedida.É mal sucedida se a célula 
    // estiver descoberta ou se nao existir no tabuleiro

}

int gameEnded(int board[25][25], int nlines, int ncols){
    
    // indica se o jogo acabou

}