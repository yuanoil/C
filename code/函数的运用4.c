#include<stdio.h>
#include<math.h>
int er_fen(int arr[], int k, int sz)
{
    int left = 0;
    int right = sz - 1;
    while (left<=right)
    {
        int mid = (left + right) / 2;
        if (arr[mid]<k)
        {
            left = mid + 1;
        }
        else if (arr[mid] > k)
        {
            right = mid - 1;
        }
        else
        {
            return mid;
        }
        
        
    }
    
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int k = 7;
     int sz = sizeof(arr) / sizeof(arr[0]);
    int ret = er_fen(arr, k, sz);
    if (ret==-1)
    {
        printf("找不到了%d\n");
    }
    else 
    {
        printf("找到了%d\n,ret");
    }
    
    return 0;
}