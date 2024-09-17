// istas enlazadas permiten insertar y eliminar elementos en cualquier posición. Son dinámicas y flexibles en términos de tamaño.

#include <stdio.h>
#include <stdlib.h>

// Definición de la estructura de un nodo
struct Node
{
    int data;
    struct Node *next;
};

// Función para insertar un nodo al principio de la lista
void insertAtBeginning(struct Node **head, int newData)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = *head;
    *head = newNode;
}

// Función para insertar un nodo al final de la lista
void insertAtEnd(struct Node **head, int newData)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    struct Node *last = *head;
    newNode->data = newData;
    newNode->next = NULL;
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = newNode;
}

// Función para insertar un nodo después de un nodo dado
void insertAfter(struct Node *prevNode, int newData)
{
    if (prevNode == NULL)
    {
        printf("El nodo anterior no puede ser NULL");
        return;
    }
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = prevNode->next;
    prevNode->next = newNode;
}

// Función para buscar un nodo con un valor dado
struct Node *search(struct Node *head, int key)
{
    struct Node *current = head;
    while (current != NULL)
    {
        if (current->data == key)
            return current;
        current = current->next;
    }
    return NULL;
}

// Función para eliminar un nodo con un valor dado
void deleteNode(struct Node **head, int key)
{
    struct Node *temp = *head, *prev = NULL;
    if (temp != NULL && temp->data == key)
    {
        *head = temp->next;
        free(temp);
        return;
    }
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL)
        return;
    prev->next = temp->next;
    free(temp);
}

// Función para imprimir la lista enlazada
void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

int main()
{
    struct Node *head = NULL;
    insertAtBeginning(&head, 1);
    insertAtEnd(&head, 2);
    insertAtBeginning(&head, 0);
    insertAfter(head, 1);
    printList(head);

    struct Node *foundNode = search(head, 2);
    if (foundNode != NULL)
        printf("Nodo encontrado con valor: %d\n", foundNode->data);
    else
        printf("Nodo no encontrado\n");

    deleteNode(&head, 1);
    printList(head);
    
    getchar();
    return 0;
}
