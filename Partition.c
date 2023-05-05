#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/*
    You are given a sequence a consisting of n integers. You may partition this sequence into two sequences b and c in such a way that every element belongs exactly to one of these sequences.

Let B be the sum of elements belonging to b, and C be the sum of elements belonging to c (if some of these sequences is empty, then its sum is 0). What is the maximum possible value of B - C?
*/


int main()
{
    int a,sumpos=0,sumneg=0;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>=0)
        {
            sumpos+=arr[i];
        }
        else
        {
            sumneg+=arr[i];
        }

    }
    printf("%d\n",sumpos-sumneg);
   
   return 0;
}