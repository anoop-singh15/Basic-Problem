#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
Sam's house has an apple tree and an orange tree that yield an abundance of fruit. Using the information given below, determine the number of apples and oranges that land on Sam's house.

In the diagram below:

The red region denotes the house, where  is the start point, and  is the endpoint. The apple tree is to the left of the house, and the orange tree is to its right.
Assume the trees are located on a single point, where the apple tree is at point , and the orange tree is at point .
When a fruit falls from its tree, it lands  units of distance from its tree of origin along the -axis. *A negative value of  means the fruit fell  units to the tree's left, and a positive value of  means it falls  units to the tree's right. *
*/

int main()
{
    int counta = 0, counto = 0;
    int sams, samend, apploc, oranloc;
    scanf("%d%d%d%d", &sams, &samend, &apploc, &oranloc);
    int apple, orange;
    scanf("%d%d", &apple, &orange);
    int arrapp[apple];
    int arroran[orange];
    for (int i = 0; i < apple; i++)
    {
        scanf("%d", &arrapp[i]);
        int distance = 0;
        distance = apploc + arrapp[i];
        if (distance >= sams && distance <= samend)
        {
            counta++;
        }
    }
    for (int i = 0; i < orange; i++)
    {
        scanf("%d", &arroran[i]);
        int distance = 0;
        distance = oranloc + arroran[i];
        if (distance >= sams && distance <= samend)
        {
            counto++;
        }
    }
    printf("%d\n%d\n", counta, counto);

    return 0;
}