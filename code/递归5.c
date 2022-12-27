#include<stdio.h>
#include<math.h>
int fib(int n)
{
    if (n<=2)
    {
        return 1;
    }
    else
        return fib(n-1)+fib(n-2);
}
int fib1(int n)
{
    int a = 0;
    int b = 0;
    int c = 0;
    while (n>2)
    {
        c = a + b;
        a = b;
        b = c;
        n--;
    }
    return c;
}
int main()
{
    int i = 0;
    int ret = 0;
    scanf("%d", &i);
    ret = fib(i);
    printf("ret=%d\n", ret);
    return 0;
}