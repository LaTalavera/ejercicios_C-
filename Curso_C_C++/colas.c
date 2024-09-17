/* Colas utilizan el principio FIFO, donde el primer elemento insertado es el primero en ser eliminado.
Son útiles para gestionar tareas en orden de llegada, como en la gestión de procesos.*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 1000

struct Queue
{
    int front, rear, size;
    int items[MAX];
};

// Función para inicializar la cola
void initialize(struct Queue *queue)
{
    queue->front = queue->size = 0;
    queue->rear = MAX - 1;
}

// Función para verificar si la cola está vacía
int isEmpty(struct Queue *queue)
{
    return (queue->size == 0);
}

// Función para verificar si la cola está llena
int isFull(struct Queue *queue)
{
    return (queue->size == MAX);
}

// Función para insertar un elemento en la cola
void enqueue(struct Queue *queue, int item)
{
    if (isFull(queue))
    {
        printf("La cola está llena\n");
        return;
    }
    queue->rear = (queue->rear + 1) % MAX;
    queue->items[queue->rear] = item;
    queue->size++;
    printf("%d insertado en la cola\n", item);
}

// Función para eliminar un elemento de la cola
int dequeue(struct Queue *queue)
{
    if (isEmpty(queue))
    {
        printf("La cola está vacía\n");
        return -1;
    }
    int item = queue->items[queue->front];
    queue->front = (queue->front + 1) % MAX;
    queue->size--;
    return item;
}

// Función para devolver el primer elemento de la cola
int front(struct Queue *queue)
{
    if (isEmpty(queue))
    {
        printf("La cola está vacía\n");
        return -1;
    }
    return queue->items[queue->front];
}

// Función para devolver el último elemento de la cola
int rear(struct Queue *queue)
{
    if (isEmpty(queue))
    {
        printf("La cola está vacía\n");
        return -1;
    }
    return queue->items[queue->rear];
}

int main()
{
    struct Queue queue;
    initialize(&queue);

    enqueue(&queue, 10);
    enqueue(&queue, 20);
    enqueue(&queue, 30);

    printf("%d eliminado de la cola\n", dequeue(&queue));
    printf("Elemento frontal de la cola: %d\n", front(&queue));
    printf("Elemento final de la cola: %d\n", rear(&queue));
    getchar();
    return 0;
}
