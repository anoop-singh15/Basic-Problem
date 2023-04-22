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
    int d=0;
    int duplicate[d];

    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < b; i++)
    {
        scanf("%d", &arr2[i]);
    }

    // program to check equal value condition of 2 array 
    // making a duplicate array of same size as 3rd array with values at all index -1

    for (int i = 0; i < a; i++)
    {

        for (int j = 0; j < b; j++)
        {

            if (arr1[i] == arr2[j])
            {
                arr3[c++] = arr1[i];
                duplicate[d++]=-1;
                break;
               
            }
        }
    }
     

    // Program to print third array and duplicate array
    printf("\nthird array ");
    for(int i=0;i<c;i++)
    {
        printf("%d ",arr3[i]);
    }
    printf("\nDuplicate array ");

    for(int i=0;i<d;i++)
    {
        printf("%d ",duplicate[i]);
    }



    // Program To print UNIQUE  elements from an array
    
    for (int i = 0; i < c; i++)
    {
        int count=1;
        for (int j = i+1; j < c; j++)
        {

            if (arr3[i] == arr3[j])
            {
                duplicate[j]=0;
                count++;
            }
        }
        if(duplicate[i]!=0)
        {
            duplicate[i]=count;
        }
    }

    // Program To print UNIQUE elements from an array
    printf("\nUNIQUE ELEMENT IN ARRAY 3\n");
    for(int i=0;i<c;i++)
    {
        if(duplicate[i]==1)
        {
            printf("%d ",arr3[i]);
        }
        
    }

    // Program To print DUPLICATE  elements from an array
    printf("\nDuplicate ELEMENT IN ARRAY 3\n");
    for(int i=0;i<c;i++)
    {
        
        if(duplicate[i]>1)
        {
            printf("%d ",arr3[i]);
        }
    }



    return 0;
}