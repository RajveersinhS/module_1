#include <stdio.h>

void Max_Min(int ary[], int n)
{
    int Max = 0;
    for (int i = 0; i < n; i++)
    {
        if (ary[i] > Max)
        {
            Max = ary[i];
        }
    }
    int Min = ary[0];
    for (int i = 1; i < n; i++)
    {
        if (Min > ary[i])
        {
            Min = ary[i];
        }
    }
    printf("Max = %d  Min = %d", Max, Min);
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

    Max_Min(array, n);

    return 0;
}