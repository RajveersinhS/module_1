#include <stdio.h>
#include <string.h>

struct student
{
    char name[50];
    int age;
};

void swap(struct student *s1, struct student *s2)
{
    struct student temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}

int main()
{
    struct student s1 = {"John", 25};
    struct student s2 = {"Jane", 22};

    printf("Before swapping:\n");
    printf("Student 1: %s %d\n", s1.name, s1.age);
    printf("Student 2: %s %d\n", s2.name, s2.age);

    swap(&s1, &s2);

    printf("\nAfter swapping:\n");
    printf("Student 1: %s %d\n", s1.name, s1.age);
    printf("Student 2: %s %d\n", s2.name, s2.age);

    return 0;
}
