#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
Given a string, remove characters until the string is made up of any two alternating characters. When you choose a character to remove, all instances of that character must be removed. Determine the longest string possible that contains just two alternating letters.
*/

struct stack
{
   char *arr;
   int size;
   int top;
};

int isEmpty(struct stack *ptr)
{
   if (ptr->top == -1)
   {
      return 1;
   }
   return 0;
}

int isFull(struct stack *ptr)
{
   if (ptr->top == ptr->size - 1)
   {
      return 1;
   }
   return 0;
}

void push(struct stack *ptr, char val)
{
   if (isFull(ptr) == 0)
   {
      ptr->top++;
      ptr->arr[ptr->top] = val;
   }
}

void pop(struct stack *ptr)
{
   if (isEmpty(ptr) == 0)
   {
      ptr->top--;
   }
}

void traversal(struct stack *ptr)
{
   if (ptr->top > 0)
   {
      for (int i = 0; i <= ptr->top; i++)
      {
         printf("%c", ptr->arr[i]);
      }
   }
}

char stacktop(struct stack *ptr)
{
   if (isEmpty(ptr))
   {
      return '\0';
   }
   return ptr->arr[ptr->top];
}

int valid_string(char *arr, char a, char b)
{

   struct stack *str = (struct stack *)malloc(sizeof(struct stack));
   str->size = 1000;
   str->top = -1;
   str->arr = (char *)malloc(str->size * sizeof(char));

   // printf("%d\n",strlen(arr));
   for (int i = 0; i <= strlen(arr); i++)
   {
      if ((arr[i] == a || arr[i] == b))
      {
         if (stacktop(str) != arr[i])
         {

            push(str, arr[i]);
         }
         else
         {
            return 0;
         }
      }
   }

   // traversal(str);
   // printf("\n");
   str->top++;
   if (str->top == 2)
   {
      return str->top;
   }
   else if (str->top > 2)
   {
      return (str->top);
   }

   return 0;
}

int main()
{
   int a, b = 0;
   scanf("%d", &a);
   char *str = (char *)malloc(1000 * sizeof(char));

   char *str2 = (char *)malloc(1000 * sizeof(char));

   for (int i = 0; i < a; i++)
   {
      scanf(" %c", &str[i]);
   }

   int k;
   for (int i = 0; i < a; i++)
   {

      for (k = i + 1; k < a; k++)
      {
         if (str[i] == str[k])
         {
            break;
         }
      }
      if (k == a)
      {

         str2[b++] = str[i];
      }
   }

   int final = 0;
   for (int i = 0; i < b; i++)
   {
      for (int j = i + 1; j < b; j++)
      {
         // printf("%c %c\n", str2[i], str2[j]);
         int a = valid_string(str, str2[i], str2[j]);
         if (a > final)
         {
            final = a;
         }
      }
   }
   printf("%d\n", final);

   return 0;
}