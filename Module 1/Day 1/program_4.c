#include <stdio.h>

int main()
{
     char operator;
    int operand_1, operand_2;
    printf("enter number 1 : ");
    scanf("%d", &operand_1);
    printf("enter number 2 : ");
    scanf("%d", &operand_2);
    printf("\n");

    printf("Enter Operator : ");
    scanf(" %c",&operator);

    switch (operator)
    {
    case '+':
        printf("sum is :%d  ", operand_1 + operand_2);
        break;
    case '-':
        printf("sub is : %d", operand_1 - operand_2);
        break;
    case '*':
        printf("Mul is : %d", operand_1 * operand_2);
        break;
    case '/':
        printf("sub is : %d", operand_1 / operand_2);
        break;
    // default:
    //     printf("wrong Input ");
    //     break;
    }

    return 0;
}