#include<stdio.h>
void test(int * x,int* y)
{
    int ret = *x;
    *x = *y;
    *y = ret;
    
}
int main ()
{
    int i = 0;
    int m = 1;
    test(&i,&m);
    printf("i=%d,m=%d", i, m);
    return 0;
}
