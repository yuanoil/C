# include<stdio.h>
int main ()
{
   int arr[]={1,2,3,4,5,6,7,8,9};
   int k=7;
   int sz=sizeof(arr)/sizeof(arr[0]);
   int left=0;
   int regit=sz-1;
   while (left<=regit)
   {
    int mid=(left+regit)/2;
    if (arr[mid]>k)
    {
        regit=mid-1;
    }
    else if (arr[mid]<k)
    {
        left=mid +1;
    }
    else
    {
    printf("找到了\n",mid);
    break;
    }
   }
   if(left>=regit)
   {
    printf ("找不到了\n");
   }
   return 0;
}

