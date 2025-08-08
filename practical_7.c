/*
    Author - Vishwesh Panchal
    DOC - 08-Aug-2025
    Objective - Implement single ended queue using array and perform following operations: insert, delete, display.
*/
#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int que[MAX];
int front = -1;
int rear = -1;

void display()
{
    if (front == -1)
    {
        printf("\nQueue is Empty!");
        return;
    }
    else
    {
        printf("\nQueue is: [ ");
        for (int i = front; i <= rear; i++)
        {
            printf("%d", que[i]);
            if (i != rear)
                printf(", ");
        }
        printf(" ]");
    }
}

void push()
{
    int n;
    if (rear == MAX - 1)
    {
        printf("Queue is Overflow!");
        return;
    }
    if (front == -1)
    {
        front = 0;
    }
    rear++;
    printf("Push the number : ");
    scanf("%d", &n);
    que[rear] = n;
    printf("Number Pushed Successfully!\n");
    display();
}

void pop()
{
    if (front > rear || front == -1)
    {
        printf("\nQueue is Underflow!");
        return;
    }
    printf("\nNumber Poped: %d", que[front]);
    front++;
    if (front > rear)
    {
        front = rear = -1;
    }
    display();
    return;
}
int main()
{
    int n;

    while (1)
    {
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\nEnter the chocie: ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid Choice!");
            break;
        }
    }
    return 0;
}