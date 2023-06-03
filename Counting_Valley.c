#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
An avid hiker keeps meticulous records of their hikes. During the last hike that took exactly  steps, for every step it was noted if it was an uphill, , or a downhill,  step. Hikes always start and end at sea level, and each step up or down represents a  unit change in altitude. We define the following terms:

A mountain is a sequence of consecutive steps above sea level, starting with a step up from sea level and ending with a step down to sea level.
A valley is a sequence of consecutive steps below sea level, starting with a step down from sea level and ending with a step up to sea level.
Given the sequence of up and down steps during a hike, find and print the number of valleys walked through.
*/


int main()
{
    int a;
    char b;
    scanf("%d", &a);

    int pos = 0;
    int final = 0;

    for (int i = 0; i < a; i++)
    {
        scanf(" %c", &b);
        if (b == 'U')
        {
            pos++;
        }
        if (b == 'D')
        {
            if (pos == 0)
            {
                final++;
            }
            pos--;
        }
    }
    if (pos < 0)
    {
        printf("%d\n", final - 1);
    }
    else
        printf("%d\n", final);
    return 0;
}
