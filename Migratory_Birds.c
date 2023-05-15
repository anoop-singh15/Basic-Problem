#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
Given an array of bird sightings where every element represents a bird type id, determine the id of the most frequently sighted type. If more than 1 type has been spotted that maximum amount, return the smallest of their ids.
*/

int main()
{
    int a;
    scanf("%d", &a);
    int arr[a];
    int *brr = (int *)calloc(5, sizeof(int));
    int *crr = (int *)calloc(5, sizeof(int));

    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);

        switch (arr[i])
        {
        case 1:
            brr[1]++;
            break;
        case 2:
            brr[2]++;
            break;
        case 3:
            brr[3]++;
            break;
        case 4:
            brr[4]++;
            break;
        case 5:
            brr[5]++;
            break;
        }
    }

    for (int i = 1; i <= 5; i++)
    {
        crr[i] = brr[i];
    }

    for (int i = 1; i <= 5; i++)
    {

        if (crr[0] < crr[i])
        {
            int temp = crr[0];
            crr[0] = crr[i];
            crr[i] = temp;
        }
    }

    int max = crr[0];
    
    for (int i = 1; i <= 5; i++)
    {
        if (brr[i] == max)
        {
            printf("%d\n", i);
            break;
        }
    }
    return 0;
}