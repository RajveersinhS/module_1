#include <stdio.h>
#include <stdlib.h> // Array of stucture program 1 & program 2 array intialization

struct student
{
    int Roll_no;
    char name[20];
    float marks;
};

typedef struct student student;

void input(student num[], int n)
{ // Function for input
    for (int i = 0; i < n; i++)
    {
        printf("Enter details for student %d:\n", i + 1);
        printf("Enter student ID: ");
        scanf("%d", &num[i].Roll_no);
        printf("Enter name of student: ");
        scanf("%s", num[i].name);
        printf("Enter marks: ");
        scanf("%f", &num[i].marks);
    }
}

void output(student num[], int n)
{ // Function for output display
    for (int i = 0; i < n; i++)
    {
        printf("\nStudent %d details:\n", i + 1);
        printf("Student ID: %d\n", num[i].Roll_no);
        printf("Name of student: %s\n", num[i].name);
        printf("Marks: %.2f\n", num[i].marks);
    }
}
void intializaion_of_array(student *ptr, int n)
{ // function for initalization of array of structure

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Enter student ID: ");
        scanf("%d", &(ptr + i)->Roll_no);
        printf("Enter name of student: ");
        scanf("%s", (ptr + i)->name);
        printf("Enter marks: ");
        scanf("%f", &(ptr + i)->marks);
    }
}
void intialize_output(student *ptr, int n)
{ // Funcion for display intialize array of stucture
    for (int i = 0; i < n; i++)
    {
        printf("\nStudent %d details:\n", i + 1);
        printf("Student ID: %d\n", (ptr + i)->Roll_no);
        printf("Name of student: %s\n", (ptr + i)->name);
        printf("Marks: %.2f\n", (ptr + i)->marks);
    }
}

int main()
{
    int n;
    printf("Enter the number of student data you want to store: ");
    scanf("%d", &n);

    student No[n];

    // For input
    input(No, n);

    // For output
    output(No, n);

    // Initialize array of structure
    student *ptr = No;
    intializaion_of_array(ptr, n);

    // For output
    intialize_output(ptr, n);

    return 0;
}
