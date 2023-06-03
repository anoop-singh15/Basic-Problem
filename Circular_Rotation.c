#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int arr[4];
     int j=0;
     int brr[4];

    // TO MANAGE  ROTATON MORE THAN SIZEOF ARRAY IMPORTANT condition // rotation remainder sizeof(ARRAy)
    int rotation=3%4; 

    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
    }


    // lOGIC 2 For Circular Rotation O(N)
    for(int i=4-rotation;i<4;i++)
    {
        brr[j++]=arr[i];
    }

    for(int i=0;i<4-rotation;i++)
    {
        brr[j++]=arr[i];
    }


    //LOGIC 1 FOR CIRCULAR ROTATION O(N2)
    // j = arr[4 - 1];
    // printf("%d\n",j);
    // for (int i = 4 - 1; i >= 1; i--)
    // {
    //     arr[i] = arr[i - 1];
    // }
    // arr[0] = j;




    for (int k = 0; k < 4; k++)
    {
        printf("%d ", brr[k]);
    }
    return 0;
}