#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
    int a = 5, count = 5;
    long  int max_sum=0,min_sum=0;
    long  int arr[a];

    for (int i = 0; i < a; i++)
    {
        scanf("%ld", &arr[i]);
    }

    // Bubble sort array
    while (count > 1)
    {
        for (int i = 0; i <a-1; i++)
        {

            if (arr[i] > arr[i + 1])
            {
                long int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        count --;
    }
   

    for(int i=0;i<a;i++)
    {
        if(i>=1)
        {
            max_sum+=arr[i];
        }
        if(i<a-1)
        {
            min_sum+=arr[i];
        }
    }
    printf("%ld %ld\n",min_sum,max_sum);

    return 0;
}
