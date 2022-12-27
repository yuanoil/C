#include<stdio.h>
#include<string.h>
int main()
{
    char arr1[20] = "hello bit!";
    char arr2[20] = "#################";
    strcpy(arr2, arr1);
    printf("%s\n", arr2);
    return 0;
}