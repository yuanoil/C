#include<stdio.h>
void init(int arr[],int sz)
{
    int i = 0;
    for ( i = 0; i < sz; i++)
    {
        arr[i] = 0;
    }
    
}
void print(int arr[],int sz)
{
    int i = 0;
    for ( i = 0; i < sz; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}
void reverse(int arr[0], int sz)
{
    int left = 0;
    int right = sz - 1;
   while (left<right)
   {
    int tem = arr[left];
    arr[left] = arr[right];
    arr[right] = tem;
    left++;
    right--;
   }
}
    
 int main()
{
    
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int sz = sizeof(arr) / sizeof(arr[0]);
    //init(arr, sz);
    print(arr, sz);
    reverse(arr, sz);
    print(arr, sz);
    return 0;
}