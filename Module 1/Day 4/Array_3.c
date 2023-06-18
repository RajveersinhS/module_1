#include <stdio.h> // Reverse the array

void Reverse(int ary[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int t = ary[i];
        ary[i] = ary[n - i - 1];
        ary[n - i - 1] = t;
    }

    for (int i = 0; i < n; i++) // For print a reverse array
    {
        printf("%d\t", ary[i]);
    }
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

    Reverse(array, n);
    return 0;
}