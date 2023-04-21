#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    int a[3], b[3], a_score = 0, b_score = 0, n = 0;
    int c[n];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &b[i]);
    }

    int i = 0;
    while (i < 3)
    {
        if (a[i] > b[i])
        {
            a_score++;
        }
        else if (a[i] < b[i])
        {
            b_score++;
        }
        i++;
    }

    c[n++] = a_score;
    c[n++] = b_score;

    for (int i = 0; i < 2; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}