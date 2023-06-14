#include <stdio.h>

struct student
{
    int Roll_no;
    char Name[100];
    int physics, maths, chemistry;
};

int main()
{
    int n;
    printf("Number of students: ");
    scanf("%d", &n);

    struct student data_of_std[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter Roll No of student %d: ", i + 1);
        scanf("%d", &data_of_std[i].Roll_no);

        printf("Enter name of student %d: ", i + 1);
        scanf("%s", data_of_std[i].Name);

        printf("Enter physics marks of student %d: ", i + 1);
        scanf("%d", &data_of_std[i].physics);

        printf("Enter maths marks of student %d: ", i + 1);
        scanf("%d", &data_of_std[i].maths);

        printf("Enter chemistry marks of student %d: ", i + 1);
        scanf("%d", &data_of_std[i].chemistry);
    }

    int obtain_marks[n];
    float percentage[n];

    for (int i = 0; i < n; i++)
    {
        obtain_marks[i] = data_of_std[i].chemistry + data_of_std[i].maths + data_of_std[i].physics;
        percentage[i] = (float)obtain_marks[i] / 3;
    }

    for (int i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll No: %d\n", data_of_std[i].Roll_no);
        printf("Name: %s\n", data_of_std[i].Name);
        printf("Physics Marks: %d\n", data_of_std[i].physics);
        printf("Maths Marks: %d\n", data_of_std[i].maths);
        printf("Chemistry Marks: %d\n", data_of_std[i].chemistry);
        printf("Obtain Marks: %d\n", obtain_marks[i]);
        printf("Percentage: %.2f\n", percentage[i]);
    }

    return 0;
}
