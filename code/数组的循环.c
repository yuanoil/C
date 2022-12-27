#include<stdio.h>
#include<math.h>
int main ()
{
    int arr[3][4] = {{1, 2, 3}, {4, 5}};
    int i = 0;
    for ( i = 0; i <3; i++)
    {
        int j = 0;
        for ( j = 0; j <4; j++)
        {
            printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);
            // printf("%d", arr[i][j]);
        }
        //printf("\n");
    }
    
    return 0;
}