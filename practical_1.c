/*
    Author - Vishwesh Panchal
    DOC - 18-Jul-2025
    Objective - Create arrays of (i) student enrollment numbers (ii) student names (iii) student CGPA.
 Perform following operations on these arrays: insert, delete, display, retrieve, append.
*/
#include <stdio.h>
#include <string.h>
#define SIZE 2
#define MAX 100

int studenr[SIZE];
char name[SIZE][MAX];
float studCGPA[SIZE];
int count = 0;

void insert()
{
    for (int i = 0; i < SIZE; i++)
    {
        printf("-------------Student %d-------------", i + 1);
        printf("\nEnter the Enrollemnt number of Student: ");
        scanf("%d", &studenr[i]);
        printf("Enter the Name of Student: ");
        scanf("%s", name[i]);
        printf("Enter the CGPA: ");
        scanf("%f", &studCGPA[i]);
        count++;
    }
}
void display()
{

    for (int i = 0; i <= count-1; i++)
    {
        if (studenr[i] == 0 && studCGPA[i] == 0 && name[i][0] == '\0')
        {
            printf("------------------NO DATA FOUND------------------\n");
            printf("Enter the data first then choose Display Option!!\n");
            printf("-------------------------------------------------");
            return;
        }
    }
    printf("------------------------------\n");
    printf("Sr No.\tEnr_No\tName\tCGPA\n");
    printf("------------------------------\n");
    for (int i = 0; i <= count-1; i++)
    {
        printf("%d\t%d\t%s\t%.2f\n", i + 1, studenr[i], name[i], studCGPA[i]);
        printf("------------------------------\n");
    }
}
void delete()
{
    int r;
    printf("Enter the Enrollment Number which you want to delete: ");
    scanf("%d", &r);
    for (int i = 0; i <= count-1; i++)
    {
        if (studenr[i] == r)
        {
            for (int j = i; j < SIZE - 1; j++)
            {
                studenr[j] = studenr[j + 1];
                strcpy(name[j], name[j + 1]);
                studCGPA[j] = studCGPA[j + 1];
            }
            studenr[SIZE - 1] = 0;
            strcpy(name[SIZE - 1], "");
            studCGPA[SIZE - 1] = 0.0;
            count--;
            printf("------------------------------\n");
            printf("Enrollment Number %d deleted successfully!!\n", r);
            break;
            
        }
    }
    for (int i = 0; i <= count-1; i++)
    {
        if (studenr[i] == 0 && studCGPA[i] == 0 && name[i][0] == '\0')
        {
            printf("------------------------------\n");
            printf("No Data found\n\tor\nThe Data is Empty!!\n");
            printf("------------------------------\n");
            return;
        }
    }
}

void append()
{
}
void retreive()
{
    int r;
    for (int i = 0; i < SIZE; i++)
    {
        if (studenr[i] == 0 && studCGPA[i] == 0 && name[i][0] == '\0')
        {
            printf("------------------------------\n");
            printf("No Data Found\n\tor\nThe Data is Empty!!\n");
            printf("------------------------------\n");
            return;
        }
    }
    printf("Enter the Enrollment Number which you want to retrieve: ");
    scanf("%d", &r);
    for (int i = 0; i < SIZE; i++)
    {
        if (r == studenr[i])
        {
            printf("------------------------------\n");
            printf("Enrollment Number found !!\n");
            printf("------------------------------\n");
            printf("Sr No.\tEnr_No\tName\tCGPA\n");
            printf("------------------------------\n");
            printf("%d\t%d\t%s\t%.2f\n", i + 1, studenr[i], name[i], studCGPA[i]);
            printf("------------------------------\n");
            break;
        }
        else
        {
            printf("------------------------------\n");
            printf("No Enrollment Found!!\n");
            printf("------------------------------\n");
            break;
        }
    }
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