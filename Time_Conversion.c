#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char retrnAP(char *str)
{
    int size = strlen(str);
    if (str[size - 2] == 'A')
    {
        return 'A';
    }
    return 'P';
}

int retrnint(char *str)
{
    int a = 0;
    int arr[50];
    int size = strlen(str);
    for (int i = 0; i < size; i++)
    {
        if (str[i] != ':')
        {
            int b = str[i] - 48;
            arr[a++] = b;
        }
        else
        {
            break;
        }
    }
    int num = 0;
    for (int i = 0; i < a; i++)
    {
        num = num * 10 + arr[i];
    }
    return num;
}

char *parse(char *str)
{
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] != ':')
        {
            str[i] = '0';
        }
        else
        {
            break;
        }
    }
    return str;
}

char *parseP(char *str, int val)
{
    char arr[50];
    int len = 0;
    int new = 12 + val;
    int new2 = new;

    while (new != 0)
    {
        len++;
        new /= 10;
    }
    for (int i = 0; i < len; i++)
    {
        arr[len - (i + 1)] = '0' + new2 % 10;
        new2 /= 10;
    }

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] != ':')
        {
            str[i] = arr[i];
        }
        else
        {
            break;
        }
    }
    return str;
}

char *removeAP(char *str)
{
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'M')
        {
            str[i] = str[i - 1] = '\0';
        }
    }
    return str;
}

int main()
{
    char *str = (char *)malloc(100 * sizeof(char));
    scanf("%s", str);
    int size = strlen(str);

    char AP = retrnAP(str);
    int deci = retrnint(str);
    str = removeAP(str);

    if (AP == 'A')
    {

        if (deci == 12)
        {
            str = parse(str);
            printf("%s\n", str);
        }
        else
        {
            printf("%s\n", str);
        }
    }

    if (AP == 'P')
    {
        if (deci == 12)
        {
            printf("%s\n", str);
        }
        else
        {
            str = parseP(str, deci);
            printf("%s\n", str);
        }
    }
    return 0;
}