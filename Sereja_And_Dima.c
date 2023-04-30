#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*                                     PROBLEM STATEMENT
    Sereja and Dima play a game. The rules of the game are very simple. The players have n cards in a row. Each card contains a number, all numbers on the cards are distinct. The players take turns, Sereja moves first. During his turn a player can take one card: either the leftmost card in a row, or the rightmost one. The game ends when there is no more cards. The player who has the maximum sum of numbers on his cards by the end of the game, wins.

    Sereja and Dima are being greedy. Each of them chooses the card with the larger number during his move.

    Inna is a friend of Sereja and Dima. She knows which strategy the guys are using, so she wants to determine the final score, given the initial state of the game. Help her.
*/




int main()
{
    int a;
    scanf("%d", &a);
    int b = a;
    if (a >= 1 && a <= 1000)
    {

        int arr[a];
        for (int i = 0; i < a; i++)
        {
            scanf("%d", &arr[i]);
        }

        // Bubble Sort

        while (b > 0)
        {

            int c = 0;
            for (int i = 0; i < a - 1; i++)
            {
                if (arr[i] > arr[i + 1])
                {
                    int temp = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = temp;
                    c = 1;
                }
            }
            if (c == 0)
            {
                break;
            }
            b--;
        }

        int s = a - 1;
        int d = a - 2;
        int s_sum = 0, d_sum = 0;
        while (s >= 0 && d >= 0)
        {

            if (s >= 0)
            {

                s_sum += arr[s];
                s -= 2;
            }

            if (d >= 0)
            {

                d_sum += arr[d];
                d -= 2;
            }
        }
        printf("%d %d\n", s_sum, d_sum);
    }

    return 0;
}