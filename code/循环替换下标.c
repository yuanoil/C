#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
    int arr1[]="welcome to bit!!!!!";
    int arr2[]="###################";
    int left=0;
    int regit=strlen(arr1)-1;
    while(left<=regit)
    {
    arr1[left]=arr2[left];
    arr1[regit]=arr2[regit];
     printf("%s\n",arr2);
     Sleep(1000);
     system("cls");
    left++;
    regit--;
    }
   printf("%s\n",arr2);
    return 0;
}