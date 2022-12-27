#include<stdio.h>
#include<math.h>
int fac1(int n)
{
    int i = 0;
    int ret = 1;
    for ( i=1; i<=n; i++)
    {
        ret *= i;
    }
    return ret;
}
int fac2(int n)
{
    if (n<=1)
    {
        return 1;
    }
    else
        return n * fac2(n - 1);
}
int main ()
{
    int n = 0;
    int ret = 0;
    scanf("%d", &n);
    ret = fac2(n);
    printf("%d\n", ret);
    return 0;
}