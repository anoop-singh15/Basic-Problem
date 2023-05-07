#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
Maria plays college basketball and wants to go pro. Each season she maintains a record of her play. She tabulates the number of times she breaks her season record for most points and least points in a game. Points scored in the first game establish her record for the season, and she begins counting from there.
*/

int main()
{
    int a, highscore, lowscore;
    scanf("%d", &a);
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    int i = 0;
    highscore = arr[0];
    lowscore = arr[0];
    int lowchange = 0, highchange = 0;
    while (i < a)
    {

        if (arr[i] > highscore)
        {
            highscore = arr[i];
            highchange++;
        }
        else if (arr[i] < lowscore)
        {
            lowscore = arr[i];
            lowchange++;
        }
        i++;
    }
    printf("%d %d", highchange, lowchange);

    return 0;
}