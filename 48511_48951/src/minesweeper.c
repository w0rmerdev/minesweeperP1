#include "mine_functions.c"

int main(){
    	int lines, cols, wMines, dificuldade, choice, show;

    	int board[26][26];

	bool wShow = false;

	char sdiff[200] = "Escolha dificuldade (1-fácil - 7 minas (10x10), 2-médio - 10 minas (8x8), 3-difícil - 10 minas (5x5)): ";
    
    
    	printf("%s", sdiff);
        scanf("%d", &dificuldade); 

        if (dificuldade == 1){

            	wMines = 7;
            	lines = 10; 
		cols = 10;

        } else if (dificuldade == 2){
        
            	wMines = 10;
            	lines = 8;
		cols = 8;

        } else if (dificuldade == 3)
        {
            	wMines = 10;
            	lines = 5;
		cols = 5;
        }
	
	while(choice != 0){
		char ch[200] = "0 - Exit, 1 - Generate Board, 2 - Read Board: ";
		printf("%s", ch);
		scanf("%d", &choice);
 
		if(choice == 0){
	
        		exit(0);

	    	}else if(choice == 1){

			generateBoard(board, lines, cols, wMines);

		}else if(choice == 2){
			printf("Quer mostrar as minas?(sim = 1, nao = 0) ");
			scanf("%d", &show);
			if(show == 1){
				wShow = true;
				printBoard(board, lines, cols, wShow);
			}else if(show == 0){
				wShow = false;
				printBoard(board, lines, cols, wShow);
			}
		}
	}
}
