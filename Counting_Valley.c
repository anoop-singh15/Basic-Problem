#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
