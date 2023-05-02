#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
Kefa decided to make some money doing business on the Internet for exactly n days. He knows that on the i-th day (1 ≤ i ≤ n) he makes ai money. Kefa loves progress, that's why he wants to know the length of the maximum non-decreasing subsegment in sequence ai. Let us remind you that the subsegment of the sequence is its continuous fragment. A subsegment of numbers is called non-decreasing if all numbers in it follow in the non-decreasing order.

Help Kefa cope with this task!
*/

/*  
    TIME COMPLEXITY----> 1918ms
    Space Complexity--->  400kb
*/

int main()
{
    int a, count, count2 = -1;
    scanf("%d", &a);
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < a; i++)
    {
        int j;
        count = 0;
        int c = 0;
        for (j = i; j < a - 1; j++)
        {
            if (arr[j + 1] >= arr[j])
            {
                count++;
                c = 1;
            }
            else
            {
                c = 2;
                break;
            }
        }
        if (c = 1 && arr[j] >= arr[i])
        {
            count++;
        }
        if (count2 < count)
        {
            count2 = count;
        }
    }
    printf("%d\n", count2);

    return 0;
}