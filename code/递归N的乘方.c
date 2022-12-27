#include<stdio.h>
double pow(int n,int k)
{
    if (k<0)
    
        return (1.0 / (pow(n, -k)));
        else if (k==0)
            return 1;
        else return n * pow(n, k - 1);
    
    
}
int main ()
{
    int n = 0;
    int k = 0;
    scanf("%d%d",&n,&k);
    double len = pow(n,k);
    printf("len=%lf\n", len);
    return 0;
}