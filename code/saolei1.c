#include"saolei.h"
void initboard(char board[ROWS][COLS], int rows, int cols,char set)
{
    int i = 0;
    int j = 0;
    for ( i = 0; i <rows; i++)
    {
        for ( j = 0; j <cols; j++)
        {
             board[i][j] = set;
        }
        
    }
    
}
void dispalyboard(char board[ROW][COLS], int row, int col)
{
    int i = 0;
    int j = 0;
    //打印列号
    for ( i = 0; i <=col; i++)
    {
        printf("%d", i);
    }
    printf("\n");
    for ( i = 1; i <row; i++)
    {
        printf("\n", i);
        for ( j = 1; j <col; j++)
        {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
    
}
void retmine(char board[ROWS][COLS], int row, int col)
{
    int count = easy_count;
    while (count)
    {
        int x = rand() % row + 1;
        int y = rand() % col + 1;
        if (board[x][y]=='0')
        {
            board[x][y] = '1';
            count--;
        }
        
    }
    

}
int get_mine_count(char mine[ROWS][COLS],int x,int y)
{
    return mine[x - 1][y] +
           mine[x - 1][y - 1] +
           mine[x][y - 1] +
           mine[x + 1][y - 1] +
           mine[x + 1][y] +
           mine[x + 1][y + 1] +
           mine[x][y + 1] +
           mine[x - 1][y + 1] - 8 * '0';
}
void findmine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col)
{
    int x = 0;
    int y = 0;
    int win = 0;
    while (win<row*col-easy_count)
    {
        printf("请输入排查雷的坐标”》");
    scanf("%d%d", &x, &y);
    if (x>=1&&x<=row &&y>=1&&y>=col)
    {
        //坐标合法
        //踩雷
        if (mine[x][y]=='1')
        {
            printf("你被炸死了\n");
            dispalyboard(mine, row, col);
            break;
        }
        else//不是雷    
        {
            //计算.x.y周围有几个雷
            int count = get_mine_count(mine, x, y);
            show[x][y] = count + '0';
            dispalyboard(show, row, col);
            win++;
        }
        
    }
    else
        {
            printf("坐标输入非法，请重新输入\n");
        }
        
    }
    if (win==row*col-easy_count)
    {
        printf("恭喜你，排雷成功！\n");
        dispalyboard(mine, row, col);
    }
    
    
    

}