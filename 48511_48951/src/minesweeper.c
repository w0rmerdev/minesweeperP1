#include <stdio.h>
#include "mine_functions.c"

int main(){
    int lines, cols, mines, dificuldade, choice;

    int board[26][26];
    
    printf("0 - Exit, 1 - Generate Board, 2 - Read Board: ");
    scanf("%d", &choice);

    if(choice == 0)
    {
        exit(0);
    }
    else if(choice == 1)
    {
        printf("Escolha dificuldade (1-fácil - 7 minas (10x10), 2-médio - 10 minas (8x8), 3-difícil - 10 minas (5x5)): ");
        scanf("%d", &dificuldade); 

        if (dificuldade == 1){

            mines = 7;
            lines, cols = 10;

        } else if (dificuldade == 2){
        
            mines = 10;
            lines, cols = 8;

        } else if (dificuldade == 3)
        {
            mines = 10;
            lines, cols = 5;
        }
    }
    else if (choice == 2)
    {
        
    }



}
