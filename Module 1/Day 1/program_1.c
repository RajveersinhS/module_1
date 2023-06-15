#include <stdio.h>
void biggest_num(int a, int b)
{

    a > b ? printf("The biggest num is %d ", a) : printf("the biggest num is %d ", b); // Ternary operator
}
int main()
{
    int operand1, operand2;
    printf("Enter the numbers ");
    scanf("%d %d ", &operand1, &operand2);

    biggest_num(operand1, operand2);

    return 0;
}