#include<stdio.h>
#include<stdlib.h>
count_one(n)
{
    int count = 0;
    while (n)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}
//int main ()
//{
   // int a = 0;
   // scanf("%d", &a);
   // int count = count_one(a);
   // printf("count=%d\n", count);
   // return 0;
//}
get_fii(int m,int n)
{
    int tmp = m ^ n;
    return count_one(tmp);
}
int main ()
{
    int m = 0;
    int n = 0;
    scanf("%d%d", &m,&n);
    int count = get_fii(m, n);
    printf("count=%d\n", count);
    return 0;
}