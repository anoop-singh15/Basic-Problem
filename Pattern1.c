#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/*          1
          2 1 2
        3 2 1 2 3
      4 3 2 1 2 3 4


*/


int main()
{
    int a;
    scanf("%d",&a);
    
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a-i;j++)
        {
            printf(" ");
        }
        for(int k=i;k>=1;k--)
        {
            printf("%d",k);
        }
        for(int l=2;l<=i;l++)
        {
            printf("%d",l);
        }
        printf("\n");

    }
   
   return 0;
}