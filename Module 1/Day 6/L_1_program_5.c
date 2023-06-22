#include <stdio.h>
#include <string.h>

struct student
{
    char name[50];
    int age;
    float marks;
};

void search(struct student s[], int n, char name[])
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (strcmp(s[i].name, name) == 0)
        {
            printf("Name: %s\nAge: %d\nMarks: %.2f\n", s[i].name, s[i].age, s[i].marks);
            return;
        }
    }
    printf("Student not found.\n");
}

int main()
{
    struct student s[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Enter details of student %d:\n", i + 1);
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter age: ");
        scanf("%d", &s[i].age);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    char name[50];
    printf("\nEnter the name of the student to search for: ");
    scanf("%s", name);

    search(s, 5, name);

    return 0;
}
