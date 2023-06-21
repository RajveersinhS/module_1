#include<stdio.h>
#include <string.h>    // Convert the character to its integer value
int stringToInt(const char* str) {
    int res = 0;
    int i = 0;

    while (str[i] != '\0') {
        int value = str[i] - '0';  

        res = res * 10 + value;  // Multiply the current result by 10 and add the new value

        i++;
    }

    return res;
}

int main() {
    const char* str = "625278";

    int num = stringToInt(str);

    printf("Converted integer: %d\n", num);

    return 0;
}