#include <stdio.h>

int countSetBits(unsigned int n) {
    int count = 0;
    while (n != 0) {
        n = n & (n - 1);
        count++;
    }
    return count;
}

int main() {
    unsigned int a[] = {0x1, 0xF4, 0x10001};
    int length = sizeof(a) / sizeof(a[0]);
    int totalSetBits = 0;

    for (int i = 0; i < length; i++) {
        totalSetBits += countSetBits(a[i]);
    }

    printf("Total number of set bits: %d\n", totalSetBits);

    return 0;
}
