#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int a, b;
    int c = 0;
    scanf("%d%d", &a, &b);
    int arr1[a];
    int arr2[b];
    int arr3[c];

    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < b; i++)
    {
        scanf("%d", &arr2[i]);
    }

    for (int i = 0; i < a; i++)
    {

        for (int j = 0; j < b; j++)
        {

            if (arr1[i] == arr2[j])
            {
                arr3[c++] = arr1[i];
               
            }
        }
    }

    // Program To print distinct elements from an array
    int i,j;
    for ( i = 0; i < c; i++)
    {
        
        for (j = 0; j < i; j++)
        {

            if (arr3[i] == arr3[j])
            {
                break;
            }
        }
        if(j==i)
        {
            printf("%d ",arr3[i]);
        }
    }



    return 0;
}