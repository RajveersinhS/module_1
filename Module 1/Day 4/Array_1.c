#include <stdio.h> // Average of array

void Average()
{
    int n;

    printf("Enter number of array elements : ");
    scanf("%d", &n);
    int array[n];

    int len = sizeof(array) / sizeof(array[0]);

    printf("Enter value : ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + array[i];
    }

    float average = (float)sum / n;

    printf("Average is :%f", average);
}

int main()
{
    Average();

    return 0;
}