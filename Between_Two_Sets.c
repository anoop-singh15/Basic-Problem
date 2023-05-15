#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
There will be two arrays of integers. Determine all integers that satisfy the following two conditions:

The elements of the first array are all factors of the integer being considered
The integer being considered is a factor of all elements of the second array
These numbers are referred to as being between the two arrays. Determine how many such numbers exist.
*/
void arrayTraversal(int *arr, int size)
{

    for (int i = 0; i < size; i++)
    {

        printf("%d ", arr[i]);
    }
}

int *arrayInput(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    return arr;
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

int *bubblesort(int *arr, int size)
{
    int a = size;
    while (a > 0)
    {
        for (int i = 0; i < size - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }

        a--;
    }
    return arr;
}

void count(int *arr, int size, int sizea, int *brr, int b)
{
    int count1;
    int a = 0;
    int *drr = (int *)malloc(110 * sizeof(int));

    for (int i = 0; i < size ; i++)
    {
        count1 = 1;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count1++;
            }
            else
            {
                break;
            }
        }
        if (count1 == sizea)
        {
            drr[a++] = arr[i];
        }
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (brr[j] % drr[i] != 0)
            {
                drr[i] = -1;
            }
        }
    }
    int finalcount = 0;
    for (int i = 0; i < a; i++)
    {
        if (drr[i] != -1)
        {
            finalcount++;
        }
    }

    printf("%d\n", finalcount);
}

int main()
{
    int a, b, c = 0;
    scanf("%d%d", &a, &b);
    int *arr = (int *)malloc(100 * sizeof(int));
    int *brr = (int *)malloc(100 * sizeof(int));
    int *crr = (int *)malloc(100 * sizeof(int));

    arr = arrayInput(arr, a);
    brr = arrayInput(brr, b);

    arr = bubblesort(arr, a);
    brr = bubblesort(brr, b);

    for (int i = 0; i < a; i++)
    {
        for (int j = 1; j <= arrmin(brr, b); j++)
        {
            if (j % arr[i] == 0)
            {
                crr[c++] = j;
            }
        }
    }
    crr = bubblesort(crr, c);
    // arrayTraversal(crr,c);

    count(crr, c, a, brr, b);

    return 0;
}