#include<stdio.h>
#include<string.h>
int my_str(char* str)
{
    int count = 0;
    while (*str != '\0')
    {
        count++;
        str++;
    }
    return count;
}
int main()
{
    char arr[] = "bit";
    int len = my_str(arr);
    printf("len=%d\n", len);
    return 0;
}