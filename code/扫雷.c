#include"saolei.h"
void menu()
{
    printf("***********************************\n");
    printf("*******1.play   0.exit    *********\n");
    printf("***********************************\n");
}
void game()
{
    //printf("扫雷\n");
    //布置好雷的信息
    char mine[ROWS][COLS]={0};
    //排查好雷的信息
    char show[ROWS][COLS] = {0};
    //初始化
    initboard(mine, ROWS, COLS,'0');
    initboard(show, ROWS, COLS,'*');
    //打印棋盘
    //dispalyboard(mine,ROW,COL);
    dispalyboard(show,ROW,COL);
    //布置雷
    retmine(mine, ROWS, COLS);
    dispalyboard(mine,ROW,COL);
    //扫雷
    findmine(mine, show, ROW, COL);
}
test()
{
    int input = 0;
    srand((unsigned int)time(NULL));
    do
    {
        menu();
        printf("请选择：》");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            game();
            break;
        case 0:
            printf("退出游戏：》");
            break;
            default:
                printf("选择错误，请重新选择：》");
                break;
        }
        
    } while (input);
    
}
int main()
{
    test();
    return 0;
}