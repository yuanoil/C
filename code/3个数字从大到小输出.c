#include <stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d%d%d", &a, &b, &c);
    if (a<b)
    {
        int tem = a;
         a = b;
         b = tem;
    }
    if (a<c)
    {
        int tem = a;
         a = c;
         c = tem;
    }
    if (b<c)
    {
        int tem = b;
         b = c;
         c = tem;
    }
    printf("%d%d%d\n", a, b, c);

    return 0;
}