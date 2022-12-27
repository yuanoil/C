#include<stdio.h>
#include<math.h>
print(int n)
{
    if (n>9)
    {
        print(n / 10);
    }
    printf(" %d", n % 10);
}
int main()
{
   unsigned int num = 0;
    scanf("%d", &num);
    print(num);
    return 0;
}