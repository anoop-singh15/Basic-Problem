#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
Factorials of  can't be stored even in a  long long variable. Big integers must be used for such calculations. Languages like Java, Python, Ruby etc. can handle big integers, but we need to write additional code in C/C++ to handle huge values.

We recommend solving this challenge using BigIntegers.
*/

int main()
{
    int arr[100000];
    int n;
    int a = 1;
    int multiple;
    int carry = 0;

    arr[0] = 1;
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j < a; j++)
        {
            multiple = i * arr[j] + carry;
            arr[j] = multiple % 10;
            carry = multiple / 10;
        }
        while (carry > 0)
        {
            arr[a] = carry % 10;
            carry = carry / 10;
            a++;
        }
    }
    for (int i = a - 1; i >= 0; i--)
    {
        printf("%d", arr[i]);
    }

    return 0;
}