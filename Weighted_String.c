#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Sorting Algorithm

// Binary search



/*
A weighted string is a string of lowercase English letters where each letter has a weight. Character weights are  to  from  to  as shown below:
*/

struct stack
{
    int *arr;
    int top;
    int size;
    char *arr2;
};

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    return 0;
}

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    return 0;
}

void push(struct stack *ptr, int data)
{
    if (!isFull(ptr))
    {
        ptr->top++;
        ptr->arr[ptr->top] = data;
    }
}

void push2(struct stack *ptr2, char data)
{
    if (!isFull(ptr2))
    {
        ptr2->top++;
        ptr2->arr2[ptr2->top] = data;
    }
}

void pop(struct stack *ptr)
{
    if (!isEmpty(ptr))
    {
        ptr->top--;
    }
}

int stackTop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        return -1;
    }
    return ptr->arr[ptr->top];
}

char stackTop2(struct stack *ptr2)
{
    if (isEmpty(ptr2))
    {
        return '\0';
    }
    return ptr2->arr2[ptr2->top];
}

void stackTraversal(struct stack *ptr)
{
    if (ptr->top > 0)
    {
        for (int i = 0; i <= ptr->top; i++)
        {
            printf("%d ", ptr->arr[i]);
        }
    }
}

void charTraversal(struct stack *ptr)
{
    if (ptr->top > 0)
    {
        for (int i = 0; i <= ptr->top; i++)
        {
            printf("%c ", ptr->arr2[i]);
        }
    }
}

void uniformString(char *str, struct stack *ptr, struct stack *ptr2)
{

    for (int i = 0; i < strlen(str); i++)
    {

        int a = str[i] - 96;
        if (stackTop2(ptr2) == str[i])
        {
            push2(ptr2, str[i]);
            a = a + stackTop(ptr);
            push(ptr, a);
        }
        else if (stackTop2(ptr2) != str[i])
        {
            push2(ptr2, str[i]);

            push(ptr, a);
        }
        else if (stackTop(ptr) > a)
        {
            break;
        }
    }
}

int main()
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    struct stack *p = (struct stack *)malloc(sizeof(struct stack));
    s->top = -1;
    s->size = 100000;
    s->arr = (int *)malloc(s->size * sizeof(int));
    
    p->top = -1;
    p->size = 100000;
    p->arr2 = (char *)malloc(p->size * sizeof(char));

    // Given in question
    char str[100000];
    int a;
    int arr[100000];

    scanf("%[^\n]s", str);
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    uniformString(str, s, p);



    // stackTraversal(s);
    // printf("\n");
    // charTraversal(p);
    // printf("%d\n", s->top);
    for (int i = 0; i < a; i++)
    {
        int count = 0;
        for (int j = 0; j <= s->top; j++)
        {
            if (arr[i] == s->arr[j])
            {
                count = 1;
            }
        }
        if (count == 1)
        {
            printf("Yes\n");
        }
        else
        {

            printf("No\n");
        }
    }

    return 0;
}