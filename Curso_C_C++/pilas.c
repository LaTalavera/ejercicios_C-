/*Pilas utilizan el principio LIFO, donde el último elemento insertado es el primero en ser eliminado. 
Útiles para problemas de retroceso (backtracking), como la evaluación de expresiones aritméticas. */

#include <stdio.h>
#include <stdlib.h>

#define MAX 1000

struct Stack
{
    int top;
    int items[MAX];
};

// Función para inicializar la pila
void initialize(struct Stack *stack)
{
    stack->top = -1;
}

// Función para verificar si la pila está vacía
int isEmpty(struct Stack *stack)
{
    return stack->top == -1;
}

// Función para verificar si la pila está llena
int isFull(struct Stack *stack)
{
    return stack->top == MAX - 1;
}

// Función para insertar un elemento en la pila
void push(struct Stack *stack, int item)
{
    if (isFull(stack))
    {
        printf("La pila está llena\n");
        return;
    }
    stack->items[++stack->top] = item;
    printf("%d insertado en la pila\n", item);
}

// Función para eliminar un elemento de la pila
int pop(struct Stack *stack)
{
    if (isEmpty(stack))
    {
        printf("La pila está vacía\n");
        return -1;
    }
    return stack->items[stack->top--];
}

// Función para devolver el elemento superior de la pila
int peek(struct Stack *stack)
{
    if (isEmpty(stack))
    {
        printf("La pila está vacía\n");
        return -1;
    }
    return stack->items[stack->top];
}

int main()
{
    struct Stack stack;
    initialize(&stack);

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    printf("%d eliminado de la pila\n", pop(&stack));
    printf("Elemento superior de la pila: %d\n", peek(&stack));
    getchar();
    return 0;
}
