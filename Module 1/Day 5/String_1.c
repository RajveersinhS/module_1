#include <stdio.h> // Toggle strings
int main()
{
    char str[100];
    fgets(str, 100, stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }
    puts(str);

    return 0;
}