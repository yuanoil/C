#include<stdio.h> 
int main()
 { 
    for(int i=0;i<2;i++) 
 { 
    for(int j=0;j<5;j++) 
 { 
    printf(" "); 
    }
  for(int k=0;k<2;k++) 
  {
     printf(""); 
  }
   printf("\n"); 
   } 
   for(int i=0;i<2;i++) 
   { for(int j=0;j<12;j++) 
   { 
    printf(""); 
   }
    printf("\n"); 
   } for(int i=0;i<2;i++) 
   { 
    for(int j=0;j<8;j++) 
    { if(j==4||j==7)
     { 
        printf("*"); 
        } 
        else 
        { 
            printf(" "); 
        } 
    }
     printf("\n"); 
    } 
    return 0; 
    }