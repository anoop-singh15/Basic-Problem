#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
   int a;
   scanf("%d",&a);
   for(int i=0;i<a;i++)
   {
        int j;
        for( j=0;j<a-i-1;j++)
        {
            printf(" ");
        }
        for(int k=a-1;k>=j;k--)
        {
            printf("#");
        }
        printf("\n");
   }
   return 0;
}