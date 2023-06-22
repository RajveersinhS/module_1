#include <stdio.h>
#include <string.h>

struct student
{
    char name[50];
    int age;
    float marks;
};

void sort(struct student s[], int n)
{
    int i, j;
    struct student temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (s[i].marks < s[j].marks)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
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

    sort(s, 5);

    printf("\nStudents sorted in descending order based on marks:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Name: %s\nAge: %d\nMarks: %.2f\n", s[i].name, s[i].age, s[i].marks);
    }

    return 0;
}
