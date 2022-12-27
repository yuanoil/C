#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char ipunt[20] = {0};
    system("shutdown -t -s 60");
    again:
    printf("请注意，你的电脑在一分钟内关机，如果输入：我是猪，就取消关机\n请输入");
    scanf("\s", ipunt);
    if (strcmp(ipunt,"我是猪")==0)
    {
        system("shutdown -a");
    }
    else
    {
        goto again;
    }
    return 0;
}