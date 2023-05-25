#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

int main()
{
    struct stack *str = (struct stack *)malloc(sizeof(struct stack));

    str->size = 102;
    str->top = -1;
    str->arr = (char *)malloc(str->size * sizeof(char));

    char str2[102];
    scanf("%s", &str2);

    for (int i = 0; i < strlen(str2); i++)
    {
        if (stacktop(str) != str2[i])
        {
            push(str, str2[i]);
        }
        else
        {
            pop(str);
        }
    }
    if(str->top==-1)
    {
        printf("Empty String\n");
    }
    traversal(str);

    return 0;
}