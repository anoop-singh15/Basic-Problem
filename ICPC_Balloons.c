#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
In an ICPC contest, balloons are distributed as follows:

Whenever a team solves a problem, that team gets a balloon.
The first team to solve a problem gets an additional balloon.
A contest has 26 problems, labelled A
, B
, C
, ..., Z
. You are given the order of solved problems in the contest, denoted as a string s
, where the i
-th character indicates that the problem si
 has been solved by some team. No team will solve the same problem twice.
Determine the total number of balloons that the teams received. Note that some problems may be solved by none of the teams.
*/

int main()
{
    int b;
    scanf("%d", &b);
    long int arr2[b];
    for (int i = 0; i < b; i++)
    {
        int a;
        long sum = 0;
        scanf("%d", &a);
        char str[a];
        int k = 0;
        int arr[100];

        scanf("%s", &str);
        for (int m = 0; m < a; m++)
        {
            int count = 2;
            if (str[m] != '\0')
            {
                for (int n = m + 1; n < a; n++)
                {
                    if (str[m] == str[n])
                    {
                        count++;
                        str[n] = '\0';
                    }
                }
                arr[k++] = count;
            }
        }
        for (int l = 0; l < k; l++)
        {
            sum += arr[l];
        }
        arr2[i] = sum;
    }
    for (int i = 0; i < b; i++)
    {
        printf("%d\n", arr2[i]);
    }
    return 0;
}