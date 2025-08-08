/*
    Author - Vishwesh Panchal
    DOC - 25-Jul-2025
    Objective - Create arrays of (i) student enrollment numbers (ii) student names (iii) student CGPA.
 Perform following operations on these arrays: insert, delete, display, retrieve, append.
*/
#include <stdio.h>
#include <string.h>

#define SIZE 5
#define LENGTH 50

int count = 0;
int enrollment[SIZE];
char name[SIZE][LENGTH];
float cgpa[SIZE];

void insert()
{
    if (count >= SIZE)
    {
        printf("Array is Full!!");
        return;
    }
    printf("-------------Student %d-------------\n", count + 1);
    printf("\nEnter the Enrollment number of Student: ");
    scanf("%d", &enrollment[count]);
    printf("Enter the Name of Student: ");
    scanf("%s", name[count]);
    printf("Enter the CGPA: ");
    scanf("%f", &cgpa[count]);
    count++;
}

int main()
{
    int num;
    while (1)
    {
        printf("\n1. Insert\n2. Display\n3. Retrieve\n4. Append\n5. Delete\nEnter the Choice: ");
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            insert();
            break;
        case 2:
            display();
            break;
        case 3:
            retreive();
            break;
        case 4:
            append();
            break;
        case 5:
            delete();
            break;
        default:
            printf("Invalid Choice!! Choose valid option!!");
            break;
        }
    }
    return 0;
}