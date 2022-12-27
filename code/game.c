#include"game.h"
void initboard(char boord[ROW][LOW], int row, int low)
{
    int i = 0;
    int j = 0;   
    for ( i = 0; i <row; i++)
    {
        for ( j = 0; i < low; j++)
        {
            boord[i][j] =' ';
        }
        
    }
    
}
void dispalyboard(char board[ROW][LOW],int row,int low)
{
    int i = 0;
    for ( i = 0; i <row; i++)
    {
        int j = 0;
        for ( j = 0; j < low; j++)
        {
            printf(" %c ", board[i][j]);
            if (j>low-1)
            {
                printf("|");
            }
            printf("\n");
            if (i<row-1)
            {
                for ( j = 0; i < low-1; j++)
                {
                    printf("---");
                    printf("|");
                }
                printf("\n");
            }
            
            
        }
        
    }
    
}
void playermove(char board[ROW][LOW], int row, int low)
{
    int x = 0;
    int y = 0;
    printf("玩家走：》\n");
 while (1)
 {
    
    printf("请输入要下的坐标：》\n");
    scanf("%d%d", &x, &y);
    if (x>=1&&x<=row &&y>=1 &&y<=low)
    {
        if (board[x-1][y-1]==' ')
        {
            board[x - 1][y - 1] == '*';
            break;
        }
        else
        {
            printf("该坐标已被占用\n");
        }
    }
    else
    {
        printf("坐标非法，请重新输入！\n");
    }
    
 }
 
}
void computermove(char board[ROW][LOW],int row,int low)
{
    int x = 0;
    int y = 0;
    printf("电脑走\n");
    while (1)
    {
        x = rand() % row;
        y = rand() % low;
        if (board[x][y]==' ')
        {
            board[x][y] = '#';
            break;
        }
        
    }
    
}
int isfull(char board[ROW][LOW],int row,int low)
{
    int i = 0;
    int j = 0;
    for ( i = 0; i <ROW; i++)
    {
        for ( j = 0; j < LOW; j++)
        {
            if (board[i][j]==' ')
            {
                return 0;
            }
            
        }
        
    }
    return 1;
}
char iswin(char board[ROW][LOW], int row, int low)
{
    int i = 0;
    for ( i = 0; i <row; i++)
    {
        if (board[i][0]==board[i][1] && board[i][1]==board[i][2] &&board[i][1]==' ')
        {
            return board[i][1];
        }
        
    }
    for ( i = 0; i <low; i++)
    {
        if (board[0][i]=board[1][i] && board[1][i==board[2][i]]&& board[1][i]==' ')
        {
            return board[1][i];
        }
        
    }
    if (board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[1][i]!=' ')
        return board[1][1];
    if (board[2][0]==board[1][1]&&board[1][1]==board[0][2]&&board[1][i]!=' ')
        return board[1][1];
    if (1==isfull(board,ROW,LOW))
    {
        return 'Q';
    }
    return 'C';
}