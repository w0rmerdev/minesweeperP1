#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int blankBoard[26][26];
int finalBoard[26][26];


void generateBoard(int board[26][26], int nLines, int nCols, int nMines){

    // preenche um tabuleiro (parâmetro board) de dimensão
    // nLin linhas e nCol colunas com nMines minas. Utilize
    // a função rand() (stdlib.h) para gerar a posição de cada mina
    

	int i, j, mines=0;

	for(i = 0; i < nLines; i++){ // cada "espa�o" no tabuleiro quando ainda tapado � preenchido com um -
		for(j = 0; j < nCols; j++){
			board[i][j] = '-';
			blankBoard[i][j] = board[i][j];
			finalBoard[i][j] = board[i][j];
		}
	}

	i = 0;
	j = 0;

	while(mines < nMines){ // defini��o da posi��o das minas
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

	while(i < nLines){ // gerar o valo de cada espa�inho tendo em conta a posi��o das minas
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

    // mostra o tabuleiro no standard output (ecrã).
    // O parâmetro showMines indica se as minhas devem
    // ser mostradas (com o carácter *)

    	int i=0, j=0, k=0;
	while(k<nLines){ // mostrar o n�mero das linhas
		if(k == 0){
			printf("\t");
		}
		printf("|%d|\t", k);
		k++;
	}
	printf("\n\n");

	while(j<nCols){ // loop para mostrar todos os caract�res do tabuleiro
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

