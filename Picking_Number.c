#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
Given an array of integers, find the longest subarray where the absolute difference between any two elements is less than or equal to .
*/

int main()
{
    int a_count;
    int a[100];
    scanf("%d", &a_count);
    for (int i = 0; i < a_count; i++)
    {
        scanf("%d", &a[i]);
    }

    int val = 1;
  
    int temp = 0;
    for (int i = 0; i < a_count; i++)
    {
        for (int j =0; j < a_count; j++)
        {
            if ((a[i] - a[j]) == 1 || (a[i] - a[j]) == 0 && i!=j)
            {
                val++;
            }
          
        }
        if (val > temp)
        {
            temp = val;
        }
        val = 1;
       
    }

    printf("%d\n", temp);

    return 0;
}