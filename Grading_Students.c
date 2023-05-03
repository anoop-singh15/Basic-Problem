#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
    HackerLand University has the following grading policy:

Every student receives a  in the inclusive range from  to .
Any  less than  is a failing grade.
Sam is a professor at the university and likes to round each student's  according to these rules:

If the difference between the  and the next multiple of  is less than , round  up to the next multiple of .
If the value of  is less than , no rounding occurs as the result will still be a failing grade.
*/

int main()
{
    int a;
    scanf("%d", &a);
    int arr[a];
    int brr[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
        int num = arr[i];
        if (num >= 38)
        {
            while (num % 5 != 0)
            {
                num++;
            }
            int diff=num-arr[i];
            if(diff<3)
            {
                brr[i]=num;
            }
            else
            {
                brr[i]=arr[i];
            }
        }
        else
        {
            brr[i]=num;
        }
    }
    for(int i=0;i<a;i++)
    {
        printf("%d\n",brr[i]);
    }

    return 0;
}