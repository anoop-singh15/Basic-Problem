#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int a, n;
    int arr[10000];
    scanf("%d%d", &a, &n);

    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }

    // bubble sort
    int p = a;
    while (p > 1)
    {

        for (int k = 0; k < a-1; k++)
        {
            if (arr[k] > arr[k + 1])
            {
                int temp = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = temp;
            }
        }
        p--;
    }

    // for (int i = 0; i < a; i++)
    // {
    //     printf("%d ", arr[i]);
    // }
    // printf("\n");

    for (int i = 0; i < a; i++)
    {
        for (int j = i + 1; j < a; j++)
        {
            if ((arr[i] + arr[j]) == n)
            {
                printf("%d %d\n", arr[i], arr[j]);
            }
        }
    }
    return 0;
}
