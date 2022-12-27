#include<stdio.h>
#include "game.h"
void menu()
{
    printf("***************************\n");
    printf("****1.paly    0.exit*******\n");
    printf("***************************\n");
}
void game()
{
    char ret = 0;
    char board[ROW][LOW]={0};
    initboard(board, ROW, LOW);
    dispalyboard(board, ROW, LOW);
    while (1)
    {     //玩家走
        playermove(board, ROW, ROW);
        dispalyboard(board, ROW, LOW);
        ret = iswin(board,ROW,LOW);
        if (ret !='c')
        {
            break;
        }
         //电脑走
        computermove(board, ROW, LOW);
        dispalyboard(board, ROW, LOW);
        ret = iswin(board,ROW,LOW);
        if (ret !='c')
        {
            break;
        }
        
    }
    if (ret=='*')
    {
        printf("玩家赢\n");
    }
    else if(ret =='#')
    {
        printf("电脑赢\n");
    }
    else
    {
        printf("平局\n");
    }
    
}
void test()
{
    int input = 0;
    srand(( unsigned int) time(NULL));
    do
        
    {
        menu();
        printf("请选择：》\n");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            game();
            break;
        case 0:
            printf("结束游戏：》\n");
            break;
        default:
            printf("选择错误，请重新选择：》\n");
            break;
        }
    }while (input);
    
}
int main()
{
    test();
    return 0;
}