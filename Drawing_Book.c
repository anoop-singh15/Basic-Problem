#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
A teacher asks the class to open their books to a page number. A student can either start turning pages from the front of the book or from the back of the book. They always turn pages one at a time. When they open the book, page  is always on the right side:
*/

int drawing_Book(int total, int moveto)
{
   int left = moveto / 2;
   int right = (total / 2) - (moveto / 2);

   if (left > right)
      return right;

   else
      return left;
}

int main()
{
   int n, p;

   scanf("%d%d", &n, &p);

   printf("%d\n", drawing_Book(n, p));

   return 0;
}