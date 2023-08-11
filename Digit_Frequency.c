/*
The first line contains a string,  which is the given number.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char str[1000];
    int *out = (int *)calloc(10, sizeof(int));
    int i = 0;

    scanf("%[^\n]s", str);
    
    while (str[i] != '\0')
    {
        if (str[i] >= 48 && str[i] <= 57)
            out[str[i] - 48]++;

        i++;
    }

    for (int j = 0; j < 10; j++)
        printf("%d ", out[j]);

    return 0;
}