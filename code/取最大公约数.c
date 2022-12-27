#include<stdio.h>
int main()
{
    int i = 0;
    int n = 0;
    int r = 0;
    scanf("%d%d", &i, &n);
    while (i%n)
    {
        r = i % n;
        i = n;
        n = r;
    }
    printf("%d\n", n);
    return 0;
}