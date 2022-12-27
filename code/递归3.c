#include<stdio.h>
#include<math.h>
int zi_fu(char* str)
{

    if (*str!='\0')
    {
        return  1+zi_fu(str+1);
    }
    else
        return 0;
}
int main()
{
    char arr[] = "bit";
    int len = zi_fu(arr);
    printf("len=%d\n", len);
    return 0;
}