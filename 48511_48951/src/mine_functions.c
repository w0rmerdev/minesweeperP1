// APAGAR ANTES DE ENTREGAR
// https://stackoverflow.com/questions/50320998/minesweeper-in-c/50321042 

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int x, y;
float diff;
int mines= 0;
int blankBoard[26][26];
int finalBoard[26][26];


void generateBoard(int board[26][26], int nLines, int nCols, int nMines){

    // preenche um tabuleiro (parâmetro board) de dimensão
    // nLin linhas e nCol colunas com nMines minas. Utilize
    // a função rand() (stdlib.h) para gerar a posição de cada mina
	
	for(int i = 0; i < nLines; i++){
		for(int j = 0; j < nCols; j++){
			board[i][j] = '-';
			blankBoard[i][j] = board[i][j];
			finalBoard[i][j] = board[i][j];
		}
	}

	i, j = 0;

	while(mines < nMines){
		i = rand()%nLines;
		j = rand()%nCols;
		if(board[i][j] != '*'){
			board[i][j] = '*';
			finalBoard[i][j] = board[i][j];
			mines++;
		}

	}

	i, j = 0;

	while(i < nLines){
		while(j<nCols){
			if(board[i][j] != '*'){
				board[i][j] = 0;
			}
			if((board[i-1][j-1] == '*') && (board[i][j] != '*'))
            		{
           		     	board[i][j]++;
           		}
            		if((board[i-1][j] == '*') && (board[i][j] != '*'))
            		{
            			board[i][j]++;
            		}
            		if((board[i][j-1] == '*') && (board[i][j] != '*'))
            		{
                		board[i][j]++;
            		}
            		if((board[i-1][j+1] == '*') && (board[i][j] != '*'))
            		{
                		board[i][j]++;
            		}
            		if((board[i+1][j-1] == '*') && (board[i][j] != '*'))
            		{
                		board[i][j]++;
            		}
            		if((board[i+1][j] == '*') && (board[i][j] != '*'))
            		{
               			board[i][j]++;
            		}
            		if((board[i][j+1] == '*') && (board[i][j] != '*'))
            		{
               			 board[i][j]++;
            		}
            		if((board[i+1][j+1] == '*') && (board[i][j] != '*'))
            		{
                		board[i][j]++;
            		}
			j++;
		}
		j = 0;
		i++;
	}
	i,j = 0;
	    
}

void printBoard(int board[26][26], int nLines, int nCols, bool showMines){

    // mostra o tabuleiro no standard output (ecrã).
    // O parâmetro showMines indica se as minhas devem
    // ser mostradas (com o carácter *)

    	int i=0, j=0, k=0;
	while(k<nLines){
		if(k == 0){
			printf("\t");
		}
		printf("|%d|\t", k);
		k++;
	}
	printf("\n\n");

	while(j<nCols){
		printf("|%d|\t", j);
		while(i<nLines){
			if(blankBoard[i][j] == '-'){
				print("|%c|\t", blankBoard[i][j]);
			} else if(board[i][j] == 0){
				blankBoard[i][j] = 0;
				print("|%c|\t", blankBoard[i][j]);
			} else {
				print("|%d|\t", blankBoard[i][j]);
			} 
			i++;
		}
		printf("\n");
		i = 0;
		j++;
	}
    
}

int uncover(int board[26][26], int nLines, int nCols, int line, int col){

    // descobre a
    // célula (line,col) de acordo com 
    // as regras indicadas na descriçao do jogo e 
    // indica se a açao foi bem sucedida.É mal sucedida 
    // se a célula tiver uma mina ou se nao existir no tabuleiro

}

int flag(int board[26][26], int nLines, int nCols, int line, int col){
    
    // sinaliza a célula (line,col) e indica se a 
    // açao foi bem sucedida.É mal sucedida se a célula 
    // estiver descoberta ou se nao existir no tabuleiro

}

int gameEnded(int board[26][26], int nlines, int ncols){
    
    // indica se o jogo acabou

	
}

