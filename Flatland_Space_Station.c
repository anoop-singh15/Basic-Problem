#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
Flatland is a country with a number of cities, some of which have space stations. Cities are numbered consecutively and each has a road of  length connecting it to the next city. It is not a circular route, so the first city doesn't connect with the last city. Determine the maximum distance from any city to its nearest space station.
*/

void pro()
{
    int c, s;
    long int *arr = (long int *)calloc(100000, sizeof(long int));
    long int *brr = (long int *)calloc(100000, sizeof(long int));

    scanf("%d%d", &c, &s);

    for (int i = 0; i < s; i++)
    {
        long int x;
        scanf("%ld", &x);
        arr[x] = 1;
    }

    // for (int i = 0; i < c; i++)
    // {
    //     printf("%d ", arr[i]);
    // }
    // printf("\n");

    if (c == s)
    {
        printf("0\n");
    }

    else
    {
        for (int i = 0; i < c; i++)
        {
            if (arr[i] == 1)
            {
                continue;
            }
            else
            {
                long int j = i - 1;
                long int k = i + 1;
                long int minl = 1;
                long int minr = 1;

                while (arr[j] != 1 && arr[k] != 1)
                {
                    if (arr[j] != 1)
                    {
                        j--;
                    }

                     if (arr[k] != 1)
                    {
                        k++;
                    }
                    minl++;
                    minr++;

                    // IMPORTANT CONDITION
                    if (arr[j] == 1 || arr[k] == 1)
                    {

                        break;
                    }
                }

                // if (minl == minr)
                // {
                //     brr[i] = minl;
                // }

                if (minl > minr)
                {
                    brr[i] = minr;
                }
                else
                {
                    brr[i] = minl;
                }
            }
        }
        for (int i = 0; i < c; i++)
        {
            printf("%ld ", brr[i]);

            if (brr[0] < brr[i])
            {
                long int temp = brr[0];
                brr[0] = brr[i];
                brr[i] = temp;
            }
        }
        long long int val = brr[0];
        printf("%lld ", val);
    }

}

int main()
{
    pro();
    
    return 0;
}