#include <stdio.h>

void print_pattarn(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for (int space = 1; space <= (n - i); space++) // for printing space on star
        {
            printf("  ");
        }
        for (int j = i; j >= 1; j--)  // to print a numbers 
        {
            printf("%d", j);
        }

        printf("\n");
    }
}
int main()
{
    int n;
    printf("Enter the numbers: ");
    scanf("%d", &n);

    print_pattarn(n);

    return 0;
}