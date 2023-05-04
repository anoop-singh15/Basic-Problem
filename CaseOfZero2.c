#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
    Andrewid the Android is a galaxy-famous detective. In his free time he likes to think about strings containing zeros and ones.

Once he thought about a string of length n consisting of zeroes and ones. Consider the following operation: we choose any two adjacent positions in the string, and if one them contains 0, and the other contains 1, then we are allowed to remove these two digits from the string, obtaining a string of length n - 2 as a result.

Now Andreid thinks about what is the minimum length of the string that can remain after applying the described operation several times (possibly, zero)? Help him to calculate this number.
*/

int main()
{
    int a, count0 = 0, count1 = 0;
    scanf("%d", &a);
    char str[a];
    for (int i = 0; i < a; i++)
    {
        scanf(" %c", &str[i]);
    }

    for (int i = 0; i < a; i++)
    {
        if (str[i] == '0')
        {
            count0++;
        }
        else
        {
            count1++;
        }
    }
    if (count0 == count1)
    {
        printf("0\n" );
    }
    else if(count0>count1)
    {
        printf("%d\n",count0-count1);
    }
    else
    {
        printf("%d\n",count1-count0);
    }

    return 0;
}
