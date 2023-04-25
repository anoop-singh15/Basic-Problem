#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void arraytraversal(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int maxvalue(int *arr, int size)
{
    int *new = (int *)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++)
    {
        new[i]=arr[i];
        if (new[0] < new[i])
        {
            int temp = new[0];
            new[0] = new[i];
            new[i] = temp;
        }
    }
    return new[0];
}

int numberTallest(int *arr,int size,int max)
{
    int count =0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==max)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int a;
    scanf("%d", &a);
    int *arr = (int *)malloc(a * sizeof(int));
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = maxvalue(arr, a);
   printf("%d\n",numberTallest(arr,a,max));
   
   

    return 0;
}