#include<stdio.h>
#include<string.h>
int my_str(char* str)
{
    int count = 0;
    while (*str != '\0')
    {
        count++;
        str++;
    }
    return count;
}
//reverse_string(char arr[])
//{
 //   int left = 0;
 //   int right = my_str(arr) - 1;
  //  while (left < right)
  //  {
  //      int tem = arr[left];
  //      arr [left] = arr[right];
  //      arr[right] = tem;
  //      left++;
 //      right--;
 // }
 //  }
 void  reverse_string(char arr[])
 {
    char tmp = arr[0];
    int len = my_str(arr);
    arr[0] = arr[len - 1];
    arr[len - 1] = '\0';
    if (my_str(arr+1)>=2)
    {
        reverse_string(arr + 1);
    }
    arr[len - 1] = tmp;
 }
int main()
{
    char arr[] = "abcdef";
    reverse_string(arr);
    printf("%s\n", arr);
    return 0;
}