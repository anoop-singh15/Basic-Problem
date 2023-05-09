#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
Two children, Lily and Ron, want to share a chocolate bar. Each of the squares has an integer on it.

Lily decides to share a contiguous segment of the bar selected such that:

The length of the segment matches Ron's birth month, and,
The sum of the integers on the squares is equal to his birth day.
Determine how many ways she can divide the chocolate.
*/



int main()
{
    int a, d, m, sum = 0, count = 0;
    scanf("%d", &a);
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d%d", &d, &m);

    for (int i = 0; i <= a - m; i++)
    {
        sum = 0;
        int j = i;
        while (j < i + m)
        {
            sum += arr[j];
            j++;
        }
        if (sum == d)
        {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}