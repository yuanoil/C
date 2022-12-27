#include<stdio.h>
#include<math.h>
void ADD(int* p)
{
    (*p)++;
}
int main()
{
    int num = 0;
    ADD(&num);
    printf("num=%d\n",num);
    ADD(&num);
    printf("num=%d\n", num);
    ADD(&num);
    printf("num=%d\n", num);
    return 0;
}