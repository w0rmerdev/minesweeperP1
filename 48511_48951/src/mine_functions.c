#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int blankBoard[26][26];
int finalBoard[26][26];


void generateBoard(int board[26][26], int nLines, int nCols, int nMines){

    // preenche um tabuleiro (par√¢metro board) de dimens√£o
    // nLin linhas e nCol colunas com nMines minas. Utilize
    // a fun√ß√£o rand() (stdlib.h) para gerar a posi√ß√£o de cada mina
    

	int i, j, mines=0;

	for(i = 0; i < nLines; i++){ // cada "espaÁo" no tabuleiro quando ainda tapado È preenchido com um -
		for(j = 0; j < nCols; j++){
			board[i][j] = '-';
			blankBoard[i][j] = board[i][j];
			finalBoard[i][j] = board[i][j];
		}
	}

	i = 0;
	j = 0;

	while(mines < nMines){ // definiÁ„o da posiÁ„o das minas
		i = rand()%nLines;
		j = rand()%nCols;
		if(board[i][j] != '*'){
			board[i][j] = '*';
			finalBoard[i][j] = board[i][j];
			mines++;
		}

	}

	i = 0;
	j = 0; 

	while(i < nLines){ // gerar o valo de cada espaÁinho tendo em conta a posiÁ„o das minas
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
	i = 0;
	j = 0; 

	FILE *f = fopen("board_file.txt", "wb");
	for(i = 0; i<nLines; i++){
		for(j=0; j<nCols; j++){
			fputc(finalBoard[i][j], f);
		}
	}
	fclose(f);

}

void printBoard(int board[26][26], int nLines, int nCols, bool showMines){

    // mostra o tabuleiro no standard output (ecr√£).
    // O par√¢metro showMines indica se as minhas devem
    // ser mostradas (com o car√°cter *)

    	int i=0, j=0, k=0;
	while(k<nLines){ // mostrar o n˙mero das linhas
		if(k == 0){
			printf("\t");
		}
		printf("|%d|\t", k);
		k++;
	}
	printf("\n\n");

	while(j<nCols){ // loop para mostrar todos os caractÈres do tabuleiro
		printf("|%d|\t", j);
		while(i<nLines){ 
			if(blankBoard[i][j] == '-'){
				printf("|%c|\t", blankBoard[i][j]);
			} else if(board[i][j] == 0){
				blankBoard[i][j] = 'B'; // altera qualquer valor 0 para a letra B (blank)
				printf("|%c|\t", blankBoard[i][j]);
			} else {
				printf("|%d|\t", blankBoard[i][j]);
			} 
			i++;
		}
		printf("\n");
		i = 0;
		j++;
	}

/**	for(int k=0; k<nLines; k++){
		for(int l=0; l<nCols; l++){
			printf("|%c|\t", board[k][l]);
		}
		printf("\n");
	}

	printf("\n\n");
**/    
}

int uncover(int board[26][26], int nLines, int nCols, int line, int col){

    // descobre a
    // c√©lula (line,col) de acordo com 
    // as regras indicadas na descri√ßao do jogo e 
    // indica se a a√ßao foi bem sucedida.√â mal sucedida 
    // se a c√©lula tiver uma mina ou se nao existir no tabuleiro

}

int flag(int board[26][26], int nLines, int nCols, int line, int col){
    
    // sinaliza a c√©lula (line,col) e indica se a 
    // a√ßao foi bem sucedida.√â mal sucedida se a c√©lula 
    // estiver descoberta ou se nao existir no tabuleiro

}

int gameEnded(int board[26][26], int nlines, int ncols){
    
    // indica se o jogo acabou

	
}

