#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    scanf("%d", &a);
    if (a == 1918)
    {
        b = 256 - 229;
    }
    if (a < 1918)
    {
        if (a % 4 == 0)
        {
            b = 256 - 244;
        }
        else
        {
            b = 256 - 243;
        }
    }
    else if (a > 1918)
    {
        if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
        {
            b = 256 - 244;
        }
        else
        {
            b = 256 - 243;
        }
    }
    printf("%d.09.%d\n", b, a);
    return 0;
}