#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
A Ministry for Defense sent a general to inspect the Super Secret Military Squad under the command of the Colonel SuperDuper. Having learned the news, the colonel ordered to all n squad soldiers to line up on the parade ground.

By the military charter the soldiers should stand in the order of non-increasing of their height. But as there's virtually no time to do that, the soldiers lined up in the arbitrary order. However, the general is rather short-sighted and he thinks that the soldiers lined up correctly if the first soldier in the line has the maximum height and the last soldier has the minimum height. Please note that the way other solders are positioned does not matter, including the case when there are several soldiers whose height is maximum or minimum. Only the heights of the first and the last soldier are important.

For example, the general considers the sequence of heights (4, 3, 4, 2, 1, 1) correct and the sequence (4, 3, 1, 2, 2) wrong.

Within one second the colonel can swap any two neighboring soldiers. Help him count the minimum time needed to form a line-up which the general will consider correct.
*/

int arrmax(int *arr, int size)
{
    int *temp = (int *)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++)
    {
        temp[i] = arr[i];
        if (temp[0] < temp[i])
        {
            int swap = temp[0];
            temp[0] = temp[i];
            temp[i] = swap;
        }
    }
    return temp[0];
}

int arrmin(int *arr, int size)
{
    int *temp = (int *)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++)
    {
        temp[i] = arr[i];
        if (temp[0] > temp[i])
        {
            int swap = temp[0];
            temp[0] = temp[i];
            temp[i] = swap;
        }
    }
    return temp[0];
}

int main()
{
    int a;
    scanf("%d", &a);
    int *arr = (int *)malloc(a * sizeof(int));
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min = arrmin(arr, a);
    int max = arrmax(arr, a);

    int count;
    int count2;
    for (int i = 0; i < a; i++)
    {
        if (arr[i] == max)
        {
            count = i;
            break;
        }
    }

    for (int i = a - 1; i >= 0; i--)
    {
        if (arr[i] == min)
        {
            count2 = i;
            break;
        }
    }

    if (count2 < count)
    {
        count2 = a - 1 - 1 - count2;
    }
    else
    {
        count2 = a - 1 - count2;
    }

    printf("%d \n", count + abs(count2));
    return 0;
}