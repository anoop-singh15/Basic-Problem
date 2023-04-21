#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int absolute(int a, int b)
{
    int c = a - b;
    if (c < 0)
    {
        c *= (-1);
    }
    return c;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][n], left_right = 0, right_left = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
            if (i == j)
            {
                left_right += arr[i][j];
            }
            // important logic to access matrix element from right to left diagonal (no-Of-rows - column(j) -1)
            if (i == n - j - 1)
            {
                right_left += arr[i][j];
            }
        }
    }

    printf("%d\n", absolute(left_right, right_left));
    return 0;
}