#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
There is a large pile of socks that must be paired by color. Given an array of integers representing the color of each sock, determine how many pairs of socks with matching colors there are.
*/

int main()
{
    int a, final = 0;
    int arr[100];

    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < a; i++)
    {
        int count = 1;
        if (arr[i] != -1)
        {

            for (int j = i + 1; j < a; j++)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                    if (count % 2 == 0)
                    {
                        final++;
                    }
                    arr[j] = -1;
                }
            }
        }
    }

    printf("%d\n", final);

    return 0;
}