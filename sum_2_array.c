#include <stdio.h>
#include <string.h>
#include <stdlib.h>

long int arraynum(long int *arr, int size)
{
    long int arrnum = 0;
    for (int i = 0; i < size; i++)
    {
        arrnum = arrnum * 10 + arr[i];
    }
    return arrnum;
}

void arraytraversal(int *arr,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}

void arraysum(long int num1, long int num2,int size)
{
    long int sum=num1+num2;
  
    int i=size-1;
    int *arr=(int *)calloc(size , sizeof(int));
    while(sum>0 && i>=0)
    {
        arr[i--]=sum%10;
        sum/=10;
    }

    arraytraversal(arr,size);

}

int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    long int *arr = (long int *)malloc(m * sizeof(long int));
    long int *brr = (long int *)malloc(n * sizeof(long int));

    for (int i = 0; i < m; i++)
    {
        scanf("%ld", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%ld", &brr[i]);
    }
    long int num1 = arraynum(arr, m);
    long int num2 = arraynum(brr, n);

    if (m > n)
    {
        arraysum(num1, num2, m);
    }
    else
    {
        arraysum(num1,num2,n);
    }

    return 0;
}