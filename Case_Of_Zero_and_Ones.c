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
    int a;
    scanf("%d", &a);
    char str[a];
    for (int i = 0; i < a; i++)
    {
        scanf(" %c", &str[i]);
    }

   
    int i = 0;
    int j = 1;
    while (i < a && j < a && a >= 0)
    {
        if (str[i] == str[j])
        {
            j++;
            i++;
        }
        else
        {

            j++;
            while (j < a && i != j)
            {
                str[i] = str[j];
                i++;
                j++;
            }
            a -= 2;
            i = 0;
            j = 1;
        }
    }

    printf("%d\n", a);

    return 0;
}
