#include<stdio.h>
int main()
{
    int num = 0;
    int count = 0;
    scanf("%d\n", &num);
    int i = 0;
    for ( i = 0; i <32; i++)
    {
        if (1==((num>>i)&1))
            count++;
    }
    printf("%\n", count);
    return 0;
}