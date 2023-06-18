#include <stdio.h>
void Sum(int array[], int n)
{
    int Even_sum = 0;
    int Odd_sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] % 2 == 0)
        {
            Even_sum += array[i];
        }
        else
        {
            Odd_sum += array[i];
        }
    }

    printf("Even sum : %d Odd sum : %d ", Even_sum, Odd_sum);
}

int main()
{
    int n;
    printf("Enter numbers of elements of array : ");
    scanf("%d", &n);

    int array[n];

    printf("Enter value : ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    Sum(array, n);

    return 0;
}