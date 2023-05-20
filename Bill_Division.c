#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
Two friends Anna and Brian, are deciding how to split the bill at a dinner. Each will only pay for the items they consume. Brian gets the check and calculates Anna's portion. You must determine if his calculation is correct.

For example, assume the bill has the following prices: . Anna declines to eat item  which costs . If Brian calculates the bill correctly, Anna will pay . If he includes the cost of , he will calculate . In the second case, he should refund  to Anna.
*/

int main()
{
    int a, ne, sum = 0;
    int arr[100000];
    int pay;
    scanf("%d%d", &a, &ne);
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
        if (i != ne)
        {
            sum += arr[i];
        }
    }
    scanf("%d", &pay);

    int newpay = (sum / 2);

    if (pay - newpay == 0)
    {
        printf("Bon Appetit\n");
    }
    else
    {
        printf("%d\n", pay - newpay);
    }

    return 0;
}