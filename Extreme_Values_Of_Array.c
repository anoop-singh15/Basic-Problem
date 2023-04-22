#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d", &a);
    int arr[a];
   
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }

    int i = 0, j = a - 1, p = 1;
    while (i <= j)
    {
        if (p % 2 == 0)
        {
            printf("%d ", arr[j]);
            j--;
        }

        else
        {
            printf("%d ", arr[i]);
            i++;
        }
        p++;
    }

    return 0;
}