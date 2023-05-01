#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
There are n
 boxes with different quantities of candies in each of them. The i
-th box has ai
 candies inside.

You also have n
 friends that you want to give the candies to, so you decided to give each friend a box of candies. But, you don't want any friends to get upset so you decided to eat some (possibly none) candies from each box so that all boxes have the same quantity of candies in them. Note that you may eat a different number of candies from different boxes and you cannot add candies to any of the boxes.

What's the minimum total number of candies you have to eat to satisfy the requirements?
*/

int main()
{
    int a;
    scanf("%d", &a);
    int arr[a];
    int sum;
    int sumarr[a];

    for (int i = 0; i < a; i++)
    {
        sum = 0;
        scanf("%d", &arr[i]);
        int brr[arr[i]];
        int crr[arr[i]];
        for (int j = 0; j < arr[i]; j++)
        {
            scanf("%d", &brr[j]);
            crr[j] = brr[j];
        }
        for (int k = 0; k < arr[i]; k++)
        {
            if (crr[0] > crr[k])
            {
                int temp = crr[0];
                crr[0] = crr[k];
                crr[k] = temp;
            }
        }
        int low = crr[0];
        for (int l = 0; l < arr[i]; l++)
        {
            sum += brr[l] - low;
        }
        sumarr[i] = sum;
    }

    for (int i = 0; i < a; i++)
    {
        printf("%d\n", sumarr[i]);
    }

    return 0;
}