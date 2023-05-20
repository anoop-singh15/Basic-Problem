#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *timeConversion(char *str)
{
    int hr = atoi(strtok(str, ":"));
    int min = atoi(strtok(NULL, ":"));
    int sec = atoi(strtok(NULL, ""));

    char ampm[3];
    ampm[0] = str[8];
    ampm[1] = 'M';

    char *time = (char *)malloc(50 * sizeof(char));
    if (strcmp(ampm, "AM") == 0 && hr == 12)
    {
        sprintf(time, "00:%.2d:%.2d", min, sec);
    }
    else if (strcmp(ampm, "AM") == 0)
    {
        sprintf(time, "%.2d:%.2d:%.2d", hr, min, sec);
    }
    else if (strcmp(ampm, "PM") == 0)
    {
        if (hr != 12)
        {
            hr = hr + 12;
        }
         sprintf(time,"%.2d:%.2d:%.2d",hr,min,sec);
    }
    return time;
}

int main()
{
    char *str = (char *)malloc(40 * sizeof(char));
    scanf("%s", str);
    str = timeConversion(str);
    printf("%s\n", str);
    return 0;
}