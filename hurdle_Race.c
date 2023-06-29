#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
A video player plays a game in which the character competes in a hurdle race. Hurdles are of varying heights, and the characters have a maximum height they can jump. There is a magic potion they can take that will increase their maximum jump height by  unit for each dose. How many doses of the potion must the character take to be able to jump all of the hurdles. If the character can already clear all of the hurdles, return .
*/

int main()
{
    int max;
    int height[10];
    int height_count;
    int k;
    int temp;
    int ans = 0;

    scanf("%d%d", &height_count, &k);

    for (int i = 0; i < height_count; i++)
    {
        scanf("%d", &height[i]);
    }

    for (int i = 0; i < height_count; i++)
    {
        if (height[0] < height[i])
        {
            temp = height[0];
            height[0] = height[i];
            height[i] = temp;
        }
    }

    max = height[0]-k;
    // printf("%d\n",max);
    if (max < 0)
    {
        printf("%d\n", ans);
    }
    else
    {
        for (int i = 0; i < height_count; i++)
        {
            if (height[i] == max)
            {
                ans = max;
                break;
            }
        }
    }
    printf("%d\n", ans);

    return 0;
}