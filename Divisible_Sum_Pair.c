#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/*
Given an array of integers and a positive integer , determine the number of  pairs where  and  +  is divisible by .
*/

int main()
{
    int n,k,count=0;
    scanf("%d%d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((arr[i]+arr[j])%k==0)
            {
                count++;
            }
        }
    }
    printf("%d\n",count);
   
   return 0;
}