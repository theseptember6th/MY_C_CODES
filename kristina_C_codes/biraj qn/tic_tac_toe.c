#include<stdio.h>
#include<string.h>
int rows=0;
int columns=0;
char tic_tac_toe[3][3]={
                       {'*','*','*'},
                       {'*','*','*'},
                       {'*','*','*'}
                                 
                 };
const char PLAYER1='X';
const char PLAYER2='O';

void resetBoard()
{
   for(int i = 0; i < 3; i++)
   {
      for(int j = 0; j < 3; j++)
      {
         tic_tac_toe[i][j] = '*';
      }
   }
}
void print_board()
{
    printf(" %c | %c | %c ",tic_tac_toe[0][0],tic_tac_toe[0][0],tic_tac_toe[0][0]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ",tic_tac_toe[0][0],tic_tac_toe[0][0],tic_tac_toe[0][0]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ",tic_tac_toe[0][0],tic_tac_toe[0][0],tic_tac_toe[0][0]);
     printf("\n");
}
char _CHECKING_WIN()
{
    int i;
    // ROWS CHECKING
    for(i=0;i<3;i++)
    {
        if( tic_tac_toe[i][0]== tic_tac_toe[i][1] && tic_tac_toe[i][0]==tic_tac_toe[i][2] )
        {
            return tic_tac_toe[i][0];
        }
    }

    //COLUMNS CHECKING
     for(i=0;i<3;i++)
    {
        if( tic_tac_toe[0][i]== tic_tac_toe[1][i] && tic_tac_toe[0][i]==tic_tac_toe[2][i] )
        {
            return tic_tac_toe[0][i];
        }
    }
    // DIAGONALS CHECKING
    if( tic_tac_toe[0][0]== tic_tac_toe[1][1] && tic_tac_toe[0][0]==tic_tac_toe[2][2] )
        {
            return tic_tac_toe[0][0];
        }
    if( tic_tac_toe[0][2]== tic_tac_toe[1][1] && tic_tac_toe[0][3]==tic_tac_toe[2][0] )
        {
            return tic_tac_toe[0][2];
        }   

}

int freespaces()
{   
    int i,j;
    int free=9;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           if(tic_tac_toe[i][j]!='*')
           {
            free=free-1;
           }
        }
    }
    return free;
}

void player_1_move()
{
    printf("enter the rows and columns to specify the location\n");
    scanf("%d %d",&rows,&columns);
    do{
        if(tic_tac_toe[rows][columns]!='*')
        {
            printf("invalid move\n");
        }
        else{
            tic_tac_toe[rows][columns]=PLAYER1;
            break;
        }

    }while(tic_tac_toe[rows][columns]!='*');
}
void player_2_move()
{
    printf("enter the rows and columns to specify the location\n");
    scanf("%d %d",&rows,&columns);
    do{
        if(tic_tac_toe[rows][columns]!='*')
        {
            printf("invalid move\n");
        }
        else{
            tic_tac_toe[rows][columns]=PLAYER2;
            break;
        }

    }while(tic_tac_toe[rows][columns]!='*');
}

void print_winner(char winner)
{
    if(winner==PLAYER1)
    {
        printf("PLAYER 1 is the WINNER\n");
    }
    else if(winner==PLAYER2)
    {
        printf("PLAYER 2 is the WINNER\n");
    }
    else{
        printf("It's a draw\n");
    }
}

void main()
{     
    char winner;
    printf("player 1 is 'X' and PLAYER 2 is 'O' \n");
    while(_CHECKING_WIN == '*' || freespaces()!=0 )
     {
         print_board();
         player_1_move();
         winner=_CHECKING_WIN();
         if(winner!='*' || freespaces()==0)
         {
            break;
         }
         player_2_move();
         winner=_CHECKING_WIN();
         if(winner!='*' || freespaces()==0)
         {
            break;
         }
         

     }
     print_board();
     print_winner(winner);
    
}