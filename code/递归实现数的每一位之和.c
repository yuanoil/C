#include<stdio.h>
int DigitSum(unsigned int sum)
{
    if (sum>9)
    {
        return DigitSum(sum / 10) + sum% 10;
    }
    else
    {
        return sum;
    }
    
}
int main()
{
    unsigned int sum = 0;
    scanf("%d", &sum);
    int len = DigitSum(sum);
    printf("len=%d\n", len);
    return 0;
}