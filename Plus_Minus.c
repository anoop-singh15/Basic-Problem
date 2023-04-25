#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int a;
    float neg = 0, positive = 0, zero = 0;
    scanf("%d", &a);
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < a; i++)
    {
        if (arr[i] == 0)
        {
            zero++;
        }
        else if (arr[i] < 0)
        {
            neg++;
        }
        else if (arr[i] > 0)
        {
            positive++;
        }
    }
    // printf("%d %d %d",zero,neg,positive);
    float c;
    float d;
    float e;
    c = zero / a;
    d = positive / a;
    e = neg / a;

    printf("%.6f\n%.6f\n%0.6f", d, e, c);

    return 0;
}