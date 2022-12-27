#include<stdio.h>
int MAX(x,y)
{
    if (x>y)
    return x;
    else
    return y;
}
int main()
{
     int sum1=10;
     int sum2=20;
     printf("max=%d\n",MAX(sum1,sum2));
    return 0;
}