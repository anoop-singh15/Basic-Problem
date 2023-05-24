#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int a = 0;
    char str[101];
    char brr[101];
    scanf("%s", str);

    int size = strlen(str);

    int count = 0;
    for (int i = 0; i < size; i++)
    {
        int j;
        for (j = 0; j < i; j++)
        {

            if (str[i] == str[j] && j == i - 1)
            {

                while (j < size - 1)
                {
                    str[j] = str[j + 2];
                    j++;
                }
                size = size - 2;
                i=0;
            }
        }
        //  printf("%d\n",j);
    }

    if (size <= 0)
    {
        printf("Empty String\n");
    }
    else
    {
        for (int i = 0; i < size; i++)
        {
            printf("%c", str[i]);
        }
    }

    return 0;
}