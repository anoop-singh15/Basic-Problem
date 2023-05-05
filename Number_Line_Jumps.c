#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
You are choreographing a circus show with various animals. For one act, you are given two kangaroos on a number line ready to jump in the positive direction (i.e, toward positive infinity).

The first kangaroo starts at location  and moves at a rate of  meters per jump.
The second kangaroo starts at location  and moves at a rate of  meters per jump.
You have to figure out a way to get both kangaroos at the same location at the same time as part of the show. If it is possible, return YES, otherwise return NO.
*/

int main()
{
    int x1, v1, x2, v2;
    scanf("%d%d%d%d", &x1, &v1, &x2, &v2);
    int i = x1;
    int j = x2;
    int d=0;
    if (x2 > x1 && v2 > v1 || x1 > x2 && v1 >v2)
    {
        printf("NO");
        d=1;
    }
    int c=0;
    while (i < j && v1>v2 || i > j && v2>v1)
    {
        i +=  v1;
        j +=  v2;
        if (i == j)
        {
            printf("YES\n");
            c=1;
            break;
        }
             
    }
    if(c!=1 && d!=1)
    {
        printf("NO");
    }

    return 0;
}