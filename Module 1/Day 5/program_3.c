#include <stdio.h>
#include <stdlib.h>


struct student
{
    int id_no;
    char name[20];
};

typedef struct student student;

int main()
{
    int n;
    printf("Enter n numbers of student : ");
    scanf("%d", &n);
    student *ptr = (student *)malloc(n * sizeof(student));

    printf("Enter student id and name :\n ");
    for (int i = 0; i < n; i++)
    {
        printf("Enter student details   %d \n ", i + 1);

        printf("Student id no : ");
        scanf("%d", &ptr[i].id_no);

        printf("Enter student name : ");
        scanf("%s", ptr[i].name);
    }

    printf("student Details ");

    for (int i = 0; i < n; i++)
    {
        printf("student %d detail \n:", i + 1);
        printf("student id no : %d \n", ptr[i].id_no);
        printf("student name : %s \n", ptr[i].name);
    }

    free(ptr);

    return 0;
}