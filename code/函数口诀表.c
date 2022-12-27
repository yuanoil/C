#include<stdio.h>
void test(int x)
{
    int i = 0;
    scanf("%d\n", &x);
    for (i= 1; i<=x;i++)
    {
        int j = 1;
        for (j=1; j<=i; j++)
        {
            printf("%d*%d=%-2d", i, j, i*j);
        }
        printf("\n");
    }
}
int main()
{
    int x = 0;
    test(x);
    return 0;
}