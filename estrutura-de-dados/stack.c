#include <stdlib.h>
#include "stack.h"

struct Stack_
{
    int *elements;
    int length;
    int size;
};

Stack *create(int length)
{
    Stack *stack = (Stack *)malloc(sizeof(Stack));
    stack->elements = (int *)malloc(sizeof(int) * length);
    stack->length = length;
    stack->size = 0;

    return stack;
}

int peek(Stack *stack, int *value)
{
    if (stack->size == 0)
    {
        return 1;
    }
    *value = stack->elements[stack->size - 1];
    return 0;
}

int push(Stack *stack, int value) 
{
    if (stack->size == stack->length)  {
        return 1;
    }

    stack->elements[stack->size] = value;
    return 0;
}

int pop(Stack *stack, int *value)
{
    if (stack->size == 0)
    {
        return 1;
    }
    
    *value = stack->elements[stack->size -1];
    stack->size--;
    return 0;
} // remove do topo da pilha
int size(Stack *stack)
{
    return stack->size;
} // retorna o tamanho a pilha
int is_full(Stack *stack)
{
    return stack->size == stack->length;
} // informa se a pilha está cheia
int is_empty(Stack *stack)
{
    return stack->size == 0;
} // informa se a pilha está vazia
void destroy(Stack *stack)
{
    free(stack->elements);
    free(stack);
} // libera o espaço de memória da pilha